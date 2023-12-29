
#ifdef NS3_MODULE_COMPILATION
# error "Do not include ns3 module aggregator headers from other modules; these are meant only for end user scripts."
#endif

#ifndef NS3_MODULE_MOREV2X
    

// Module headers:
#include "lte-node-state.h"
#include "nist-epc-gtpu-header.h"
#include "nist-epc-helper.h"
#include "nist-epc-mme.h"
#include "nist-epc-s11-sap.h"
#include "nist-epc-s1ap-sap.h"
#include "nist-epc-sgw-pgw-application.h"
#include "nist-epc-tft-classifier.h"
#include "nist-epc-tft.h"
#include "nist-epc-ue-nas.h"
#include "nist-eps-bearer-tag.h"
#include "nist-eps-bearer.h"
#include "nist-ff-mac-common.h"
#include "nist-header.h"
#include "nist-lte-amc.h"
#include "nist-lte-as-sap.h"
#include "nist-lte-asn1-header.h"
#include "nist-lte-chunk-processor.h"
#include "nist-lte-common.h"
#include "nist-lte-control-messages.h"
#include "nist-lte-harq-phy.h"
#include "nist-lte-helper.h"
#include "nist-lte-interference.h"
#include "nist-lte-mac-sap.h"
#include "nist-lte-net-device.h"
#include "nist-lte-pdcp-header.h"
#include "nist-lte-pdcp-sap.h"
#include "nist-lte-pdcp-tag.h"
#include "nist-lte-pdcp.h"
#include "nist-lte-phy.h"
#include "nist-lte-prose-helper.h"
#include "nist-lte-radio-bearer-info.h"
#include "nist-lte-radio-bearer-tag.h"
#include "nist-lte-rlc-am-header.h"
#include "nist-lte-rlc-am.h"
#include "nist-lte-rlc-header.h"
#include "nist-lte-rlc-sap.h"
#include "nist-lte-rlc-sdu-status-tag.h"
#include "nist-lte-rlc-sequence-number.h"
#include "nist-lte-rlc-tag.h"
#include "nist-lte-rlc-tm.h"
#include "nist-lte-rlc.h"
#include "nist-lte-rrc-header.h"
#include "nist-lte-rrc-protocol-ideal.h"
#include "nist-lte-rrc-sap.h"
#include "nist-lte-sl-chunk-processor.h"
#include "nist-lte-sl-interference.h"
#include "nist-lte-spectrum-signal-parameters.h"
#include "nist-lte-ue-cmac-sap.h"
#include "nist-lte-ue-cphy-sap.h"
#include "nist-lte-ue-phy-sap.h"
#include "nist-lte-ue-power-control.h"
#include "nist-lte-ue-rrc.h"
#include "nist-lte-vendor-specific-parameters.h"
#include "nist-parabolic-3d-antenna-model.h"
#include "nist-point-to-point-epc-helper.h"
#include "nist-sl-pool-factory.h"
#include "nist-sl-pool.h"
#include "nist-sl-preconfig-pool-factory.h"
#include "nist-sl-resource-pool-factory.h"
#include "nist-sl-tft.h"
#include "nr-v2x-amc.h"
#include "nr-v2x-phy-error-model.h"
#include "nr-v2x-propagation-loss-model.h"
#include "nr-v2x-rlc-um.h"
#include "nr-v2x-spectrum-phy.h"
#include "nr-v2x-spectrum-value-helper.h"
#include "nr-v2x-tag.h"
#include "nr-v2x-ue-mac.h"
#include "nr-v2x-ue-net-device.h"
#include "nr-v2x-ue-phy.h"
#include "nr-v2x-utils.h"
#include "position-based-enabler.h"
#endif