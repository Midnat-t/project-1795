/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */
/*
 * Copyright (c) 2010 TELEMATICS LAB, DEE - Politecnico di Bari
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation;
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Author: Giuseppe Piro  <g.piro@poliba.it>
 *         Nicola Baldo <nbaldo@cttc.es>
 */

#ifndef NIST_LTE_UE_NET_DEVICE_H
#define NIST_LTE_UE_NET_DEVICE_H

#include "ns3/nist-lte-net-device.h"
#include "ns3/event-id.h"
#include "ns3/mac48-address.h"
#include "ns3/traced-callback.h"
#include "ns3/nstime.h"
#include "ns3/nist-lte-phy.h"
#include "ns3/nist-eps-bearer.h"


namespace ns3 {

class Packet;
class PacketBurst;
class Node;
class NistLtePhy;
class NrV2XUePhy;
class NrV2XUeMac;
class NistLteUeRrc;
class NistEpcUeNas;
class NistEpcTft;

/**
 * \ingroup lte
 * The NistLteUeNetDevice class implements the UE net device
 */
class NistLteUeNetDevice : public NistLteNetDevice
{

public:
  static TypeId GetTypeId (void);

  NistLteUeNetDevice (void);
  virtual ~NistLteUeNetDevice (void);
  virtual void DoDispose ();


  // inherited from NetDevice
  virtual bool Send (Ptr<Packet> packet, const Address& dest, uint16_t protocolNumber);


  Ptr<NrV2XUeMac> GetMac (void) const;

  Ptr<NistLteUeRrc> GetRrc () const;

  Ptr<NrV2XUePhy> GetPhy (void) const;

  Ptr<NistEpcUeNas> GetNas (void) const;

  uint64_t GetImsi () const;

  /**
   * \return the downlink carrier frequency (EARFCN)
   *
   * Note that real-life handset typically supports more than one EARFCN, but
   * the sake of simplicity we assume only one EARFCN is supported.
   */
  uint16_t GetDlEarfcn () const;

  /**
   * \param earfcn the downlink carrier frequency (EARFCN)
   *
   * Note that real-life handset typically supports more than one EARFCN, but
   * the sake of simplicity we assume only one EARFCN is supported.
   */
  void SetDlEarfcn (uint16_t earfcn);

  /**
   * \brief Returns the CSG ID the UE is currently a member of.
   * \return the Closed Subscriber Group identity
   */
  uint32_t GetCsgId () const;

  /**
   * \brief Enlist the UE device as a member of a particular CSG.
   * \param csgId the intended Closed Subscriber Group identity
   *
   * UE is associated with a single CSG identity, and thus becoming a member of
   * this particular CSG. As a result, the UE may gain access to cells which
   * belong to this CSG. This does not revoke the UE's access to non-CSG cells.
   *
   * \note This restriction only applies to initial cell selection and
   *       EPC-enabled simulation.
   */
  void SetCsgId (uint32_t csgId);


protected:
  // inherited from Object
  virtual void DoInitialize (void);


private:
  bool m_isConstructed;

  /**
   * \brief Propagate attributes and configuration to sub-modules.
   *
   * Several attributes (e.g., the IMSI) are exported as the attributes of the
   * NistLteUeNetDevice from a user perspective, but are actually used also in other
   * sub-modules (the RRC, the PHY, etc.). This method takes care of updating
   * the configuration of all these sub-modules so that their copy of attribute
   * values are in sync with the one in the NistLteUeNetDevice.
   */
  void UpdateConfig ();

  Ptr<NrV2XUeMac> m_mac;
  Ptr<NrV2XUePhy> m_phy;
  Ptr<NistLteUeRrc> m_rrc;
  Ptr<NistEpcUeNas> m_nas;

  uint64_t m_imsi;

  uint16_t m_dlEarfcn; /**< downlink carrier frequency */

  uint32_t m_csgId;

  uint32_t m_v2xEnabled;

}; // end of class NistLteUeNetDevice

} // namespace ns3

#endif /* NIST_LTE_UE_NET_DEVICE_H */
