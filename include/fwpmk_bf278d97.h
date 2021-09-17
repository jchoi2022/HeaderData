#include <winapifamily.h>
#pragma region Desktop Family or AppRuntime Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_APPRUNTIME)
DEFINE_GUID(
   FWPM_LAYER_INBOUND_IPPACKET_V4,
   0xc86fd1bf,
   0x21cd,
   0x497e,
   0xa0, 0xbb, 0x17, 0x42, 0x5c, 0x88, 0x5c, 0x58
);
DEFINE_GUID(
   FWPM_LAYER_INBOUND_IPPACKET_V4_DISCARD,
   0xb5a230d0,
   0xa8c0,
   0x44f2,
   0x91, 0x6e, 0x99, 0x1b, 0x53, 0xde, 0xd1, 0xf7
);
DEFINE_GUID(
   FWPM_LAYER_INBOUND_IPPACKET_V6,
   0xf52032cb,
   0x991c,
   0x46e7,
   0x97, 0x1d, 0x26, 0x01, 0x45, 0x9a, 0x91, 0xca
);
DEFINE_GUID(
   FWPM_LAYER_INBOUND_IPPACKET_V6_DISCARD,
   0xbb24c279,
   0x93b4,
   0x47a2,
   0x83, 0xad, 0xae, 0x16, 0x98, 0xb5, 0x08, 0x85
);
DEFINE_GUID(
   FWPM_LAYER_OUTBOUND_IPPACKET_V4,
   0x1e5c9fae,
   0x8a84,
   0x4135,
   0xa3, 0x31, 0x95, 0x0b, 0x54, 0x22, 0x9e, 0xcd
);
DEFINE_GUID(
   FWPM_LAYER_OUTBOUND_IPPACKET_V4_DISCARD,
   0x08e4bcb5,
   0xb647,
   0x48f3,
   0x95, 0x3c, 0xe5, 0xdd, 0xbd, 0x03, 0x93, 0x7e
);
DEFINE_GUID(
   FWPM_LAYER_OUTBOUND_IPPACKET_V6,
   0xa3b3ab6b,
   0x3564,
   0x488c,
   0x91, 0x17, 0xf3, 0x4e, 0x82, 0x14, 0x27, 0x63
);
DEFINE_GUID(
   FWPM_LAYER_OUTBOUND_IPPACKET_V6_DISCARD,
   0x9513d7c4,
   0xa934,
   0x49dc,
   0x91, 0xa7, 0x6c, 0xcb, 0x80, 0xcc, 0x02, 0xe3
);
DEFINE_GUID(
   FWPM_LAYER_IPFORWARD_V4,
   0xa82acc24,
   0x4ee1,
   0x4ee1,
   0xb4, 0x65, 0xfd, 0x1d, 0x25, 0xcb, 0x10, 0xa4
);
DEFINE_GUID(
   FWPM_LAYER_IPFORWARD_V4_DISCARD,
   0x9e9ea773,
   0x2fae,
   0x4210,
   0x8f, 0x17, 0x34, 0x12, 0x9e, 0xf3, 0x69, 0xeb
);
DEFINE_GUID(
   FWPM_LAYER_IPFORWARD_V6,
   0x7b964818,
   0x19c7,
   0x493a,
   0xb7, 0x1f, 0x83, 0x2c, 0x36, 0x84, 0xd2, 0x8c
);
DEFINE_GUID(
   FWPM_LAYER_IPFORWARD_V6_DISCARD,
   0x31524a5d,
   0x1dfe,
   0x472f,
   0xbb, 0x93, 0x51, 0x8e, 0xe9, 0x45, 0xd8, 0xa2
);
DEFINE_GUID(
   FWPM_LAYER_INBOUND_TRANSPORT_V4,
   0x5926dfc8,
   0xe3cf,
   0x4426,
   0xa2, 0x83, 0xdc, 0x39, 0x3f, 0x5d, 0x0f, 0x9d
);
DEFINE_GUID(
   FWPM_LAYER_INBOUND_TRANSPORT_V4_DISCARD,
   0xac4a9833,
   0xf69d,
   0x4648,
   0xb2, 0x61, 0x6d, 0xc8, 0x48, 0x35, 0xef, 0x39
);
DEFINE_GUID(
   FWPM_LAYER_INBOUND_TRANSPORT_V6,
   0x634a869f,
   0xfc23,
   0x4b90,
   0xb0, 0xc1, 0xbf, 0x62, 0x0a, 0x36, 0xae, 0x6f
);
DEFINE_GUID(
   FWPM_LAYER_INBOUND_TRANSPORT_V6_DISCARD,
   0x2a6ff955,
   0x3b2b,
   0x49d2,
   0x98, 0x48, 0xad, 0x9d, 0x72, 0xdc, 0xaa, 0xb7
);
DEFINE_GUID(
   FWPM_LAYER_OUTBOUND_TRANSPORT_V4,
   0x09e61aea,
   0xd214,
   0x46e2,
   0x9b, 0x21, 0xb2, 0x6b, 0x0b, 0x2f, 0x28, 0xc8
);
DEFINE_GUID(
   FWPM_LAYER_OUTBOUND_TRANSPORT_V4_DISCARD,
   0xc5f10551,
   0xbdb0,
   0x43d7,
   0xa3, 0x13, 0x50, 0xe2, 0x11, 0xf4, 0xd6, 0x8a
);
DEFINE_GUID(
   FWPM_LAYER_OUTBOUND_TRANSPORT_V6,
   0xe1735bde,
   0x013f,
   0x4655,
   0xb3, 0x51, 0xa4, 0x9e, 0x15, 0x76, 0x2d, 0xf0
);
DEFINE_GUID(
   FWPM_LAYER_OUTBOUND_TRANSPORT_V6_DISCARD,
   0xf433df69,
   0xccbd,
   0x482e,
   0xb9, 0xb2, 0x57, 0x16, 0x56, 0x58, 0xc3, 0xb3
);
DEFINE_GUID(
   FWPM_LAYER_STREAM_V4,
   0x3b89653c,
   0xc170,
   0x49e4,
   0xb1, 0xcd, 0xe0, 0xee, 0xee, 0xe1, 0x9a, 0x3e
);
DEFINE_GUID(
   FWPM_LAYER_STREAM_V4_DISCARD,
   0x25c4c2c2,
   0x25ff,
   0x4352,
   0x82, 0xf9, 0xc5, 0x4a, 0x4a, 0x47, 0x26, 0xdc
);
DEFINE_GUID(
   FWPM_LAYER_STREAM_V6,
   0x47c9137a,
   0x7ec4,
   0x46b3,
   0xb6, 0xe4, 0x48, 0xe9, 0x26, 0xb1, 0xed, 0xa4
);
DEFINE_GUID(
   FWPM_LAYER_STREAM_V6_DISCARD,
   0x10a59fc7,
   0xb628,
   0x4c41,
   0x9e, 0xb8, 0xcf, 0x37, 0xd5, 0x51, 0x03, 0xcf
);
DEFINE_GUID(
   FWPM_LAYER_DATAGRAM_DATA_V4,
   0x3d08bf4e,
   0x45f6,
   0x4930,
   0xa9, 0x22, 0x41, 0x70, 0x98, 0xe2, 0x00, 0x27
);
DEFINE_GUID(
   FWPM_LAYER_DATAGRAM_DATA_V4_DISCARD,
   0x18e330c6,
   0x7248,
   0x4e52,
   0xaa, 0xab, 0x47, 0x2e, 0xd6, 0x77, 0x04, 0xfd
);
DEFINE_GUID(
   FWPM_LAYER_DATAGRAM_DATA_V6,
   0xfa45fe2f,
   0x3cba,
   0x4427,
   0x87, 0xfc, 0x57, 0xb9, 0xa4, 0xb1, 0x0d, 0x00
);
DEFINE_GUID(
   FWPM_LAYER_DATAGRAM_DATA_V6_DISCARD,
   0x09d1dfe1,
   0x9b86,
   0x4a42,
   0xbe, 0x9d, 0x8c, 0x31, 0x5b, 0x92, 0xa5, 0xd0
);
DEFINE_GUID(
   FWPM_LAYER_INBOUND_ICMP_ERROR_V4,
   0x61499990,
   0x3cb6,
   0x4e84,
   0xb9, 0x50, 0x53, 0xb9, 0x4b, 0x69, 0x64, 0xf3
);
DEFINE_GUID(
   FWPM_LAYER_INBOUND_ICMP_ERROR_V4_DISCARD,
   0xa6b17075,
   0xebaf,
   0x4053,
   0xa4, 0xe7, 0x21, 0x3c, 0x81, 0x21, 0xed, 0xe5
);
DEFINE_GUID(
   FWPM_LAYER_INBOUND_ICMP_ERROR_V6,
   0x65f9bdff,
   0x3b2d,
   0x4e5d,
   0xb8, 0xc6, 0xc7, 0x20, 0x65, 0x1f, 0xe8, 0x98
);
DEFINE_GUID(
   FWPM_LAYER_INBOUND_ICMP_ERROR_V6_DISCARD,
   0xa6e7ccc0,
   0x08fb,
   0x468d,
   0xa4, 0x72, 0x97, 0x71, 0xd5, 0x59, 0x5e, 0x09
);
DEFINE_GUID(
   FWPM_LAYER_OUTBOUND_ICMP_ERROR_V4,
   0x41390100,
   0x564c,
   0x4b32,
   0xbc, 0x1d, 0x71, 0x80, 0x48, 0x35, 0x4d, 0x7c
);
DEFINE_GUID(
   FWPM_LAYER_OUTBOUND_ICMP_ERROR_V4_DISCARD,
   0xb3598d36,
   0x0561,
   0x4588,
   0xa6, 0xbf, 0xe9, 0x55, 0xe3, 0xf6, 0x26, 0x4b
);
DEFINE_GUID(
   FWPM_LAYER_OUTBOUND_ICMP_ERROR_V6,
   0x7fb03b60,
   0x7b8d,
   0x4dfa,
   0xba, 0xdd, 0x98, 0x01, 0x76, 0xfc, 0x4e, 0x12
);
DEFINE_GUID(
   FWPM_LAYER_OUTBOUND_ICMP_ERROR_V6_DISCARD,
   0x65f2e647,
   0x8d0c,
   0x4f47,
   0xb1, 0x9b, 0x33, 0xa4, 0xd3, 0xf1, 0x35, 0x7c
);
DEFINE_GUID(
   FWPM_LAYER_ALE_RESOURCE_ASSIGNMENT_V4,
   0x1247d66d,
   0x0b60,
   0x4a15,
   0x8d, 0x44, 0x71, 0x55, 0xd0, 0xf5, 0x3a, 0x0c
);
DEFINE_GUID(
   FWPM_LAYER_ALE_RESOURCE_ASSIGNMENT_V4_DISCARD,
   0x0b5812a2,
   0xc3ff,
   0x4eca,
   0xb8, 0x8d, 0xc7, 0x9e, 0x20, 0xac, 0x63, 0x22
);
DEFINE_GUID(
   FWPM_LAYER_ALE_RESOURCE_ASSIGNMENT_V6,
   0x55a650e1,
   0x5f0a,
   0x4eca,
   0xa6, 0x53, 0x88, 0xf5, 0x3b, 0x26, 0xaa, 0x8c
);
DEFINE_GUID(
   FWPM_LAYER_ALE_RESOURCE_ASSIGNMENT_V6_DISCARD,
   0xcbc998bb,
   0xc51f,
   0x4c1a,
   0xbb, 0x4f, 0x97, 0x75, 0xfc, 0xac, 0xab, 0x2f
);
DEFINE_GUID(
   FWPM_LAYER_ALE_AUTH_LISTEN_V4,
   0x88bb5dad,
   0x76d7,
   0x4227,
   0x9c, 0x71, 0xdf, 0x0a, 0x3e, 0xd7, 0xbe, 0x7e
);
DEFINE_GUID(
   FWPM_LAYER_ALE_AUTH_LISTEN_V4_DISCARD,
   0x371dfada,
   0x9f26,
   0x45fd,
   0xb4, 0xeb, 0xc2, 0x9e, 0xb2, 0x12, 0x89, 0x3f
);
DEFINE_GUID(
   FWPM_LAYER_ALE_AUTH_LISTEN_V6,
   0x7ac9de24,
   0x17dd,
   0x4814,
   0xb4, 0xbd, 0xa9, 0xfb, 0xc9, 0x5a, 0x32, 0x1b
);
DEFINE_GUID(
   FWPM_LAYER_ALE_AUTH_LISTEN_V6_DISCARD,
   0x60703b07,
   0x63c8,
   0x48e9,
   0xad, 0xa3, 0x12, 0xb1, 0xaf, 0x40, 0xa6, 0x17
);
DEFINE_GUID(
   FWPM_LAYER_ALE_AUTH_RECV_ACCEPT_V4,
   0xe1cd9fe7,
   0xf4b5,
   0x4273,
   0x96, 0xc0, 0x59, 0x2e, 0x48, 0x7b, 0x86, 0x50
);
DEFINE_GUID(
   FWPM_LAYER_ALE_AUTH_RECV_ACCEPT_V4_DISCARD,
   0x9eeaa99b,
   0xbd22,
   0x4227,
   0x91, 0x9f, 0x00, 0x73, 0xc6, 0x33, 0x57, 0xb1
);
DEFINE_GUID(
   FWPM_LAYER_ALE_AUTH_RECV_ACCEPT_V6,
   0xa3b42c97,
   0x9f04,
   0x4672,
   0xb8, 0x7e, 0xce, 0xe9, 0xc4, 0x83, 0x25, 0x7f
);
DEFINE_GUID(
   FWPM_LAYER_ALE_AUTH_RECV_ACCEPT_V6_DISCARD,
   0x89455b97,
   0xdbe1,
   0x453f,
   0xa2, 0x24, 0x13, 0xda, 0x89, 0x5a, 0xf3, 0x96
);
DEFINE_GUID(
   FWPM_LAYER_ALE_AUTH_CONNECT_V4,
   0xc38d57d1,
   0x05a7,
   0x4c33,
   0x90, 0x4f, 0x7f, 0xbc, 0xee, 0xe6, 0x0e, 0x82
);
DEFINE_GUID(
   FWPM_LAYER_ALE_AUTH_CONNECT_V4_DISCARD,
   0xd632a801,
   0xf5ba,
   0x4ad6,
   0x96, 0xe3, 0x60, 0x70, 0x17, 0xd9, 0x83, 0x6a
);
DEFINE_GUID(
   FWPM_LAYER_ALE_AUTH_CONNECT_V6,
   0x4a72393b,
   0x319f,
   0x44bc,
   0x84, 0xc3, 0xba, 0x54, 0xdc, 0xb3, 0xb6, 0xb4
);
DEFINE_GUID(
   FWPM_LAYER_ALE_AUTH_CONNECT_V6_DISCARD,
   0xc97bc3b8,
   0xc9a3,
   0x4e33,
   0x86, 0x95, 0x8e, 0x17, 0xaa, 0xd4, 0xde, 0x09
);
DEFINE_GUID(
   FWPM_LAYER_ALE_FLOW_ESTABLISHED_V4,
   0xaf80470a,
   0x5596,
   0x4c13,
   0x99, 0x92, 0x53, 0x9e, 0x6f, 0xe5, 0x79, 0x67
);
DEFINE_GUID(
   FWPM_LAYER_ALE_FLOW_ESTABLISHED_V4_DISCARD,
   0x146ae4a9,
   0xa1d2,
   0x4d43,
   0xa3, 0x1a, 0x4c, 0x42, 0x68, 0x2b, 0x8e, 0x4f
);
DEFINE_GUID(
   FWPM_LAYER_ALE_FLOW_ESTABLISHED_V6,
   0x7021d2b3,
   0xdfa4,
   0x406e,
   0xaf, 0xeb, 0x6a, 0xfa, 0xf7, 0xe7, 0x0e, 0xfd
);
DEFINE_GUID(
   FWPM_LAYER_ALE_FLOW_ESTABLISHED_V6_DISCARD,
   0x46928636,
   0xbbca,
   0x4b76,
   0x94, 0x1d, 0x0f, 0xa7, 0xf5, 0xd7, 0xd3, 0x72
);
DEFINE_GUID(
   FWPM_LAYER_INBOUND_MAC_FRAME_ETHERNET,
   0xeffb7edb,
   0x0055,
   0x4f9a,
   0xa2, 0x31, 0x4f, 0xf8, 0x13, 0x1a, 0xd1, 0x91
);
DEFINE_GUID(
   FWPM_LAYER_OUTBOUND_MAC_FRAME_ETHERNET,
   0x694673bc,
   0xd6db,
   0x4870,
   0xad, 0xee, 0x0a, 0xcd, 0xbd, 0xb7, 0xf4, 0xb2
);
DEFINE_GUID(
   FWPM_LAYER_INBOUND_MAC_FRAME_NATIVE,
   0xd4220bd3,
   0x62ce,
   0x4f08,
   0xae, 0x88, 0xb5, 0x6e, 0x85, 0x26, 0xdf, 0x50
);
DEFINE_GUID(
   FWPM_LAYER_OUTBOUND_MAC_FRAME_NATIVE,
   0x94c44912,
   0x9d6f,
   0x4ebf,
   0xb9, 0x95, 0x05, 0xab, 0x8a, 0x08, 0x8d, 0x1b
);
DEFINE_GUID(
   FWPM_LAYER_INGRESS_VSWITCH_ETHERNET,
   0x7d98577a,
   0x9a87,
   0x41ec,
   0x97, 0x18, 0x7c, 0xf5, 0x89, 0xc9, 0xf3, 0x2d
);
DEFINE_GUID(
   FWPM_LAYER_EGRESS_VSWITCH_ETHERNET,
   0x86c872b0,
   0x76fa,
   0x4b79,
   0x93, 0xa4, 0x07, 0x50, 0x53, 0x0a, 0xe2, 0x92
);
DEFINE_GUID(
   FWPM_LAYER_INGRESS_VSWITCH_TRANSPORT_V4,
   0xb2696ff6,
   0x774f,
   0x4554,
   0x9f, 0x7d, 0x3d, 0xa3, 0x94, 0x5f, 0x8e, 0x85
);
DEFINE_GUID(
   FWPM_LAYER_INGRESS_VSWITCH_TRANSPORT_V6,
   0x5ee314fc,
   0x7d8a,
   0x47f4,
   0xb7, 0xe3, 0x29, 0x1a, 0x36, 0xda, 0x4e, 0x12
);
DEFINE_GUID(
   FWPM_LAYER_EGRESS_VSWITCH_TRANSPORT_V4,
   0xb92350b6,
   0x91f0,
   0x46b6,
   0xbd, 0xc4, 0x87, 0x1d, 0xfd, 0x4a, 0x7c, 0x98
);
DEFINE_GUID(
   FWPM_LAYER_EGRESS_VSWITCH_TRANSPORT_V6,
   0x1b2def23,
   0x1881,
   0x40bd,
   0x82, 0xf4, 0x42, 0x54, 0xe6, 0x31, 0x41, 0xcb
);
DEFINE_GUID(
   FWPM_LAYER_INBOUND_TRANSPORT_FAST,
   0xe41d2719,
   0x05c7,
   0x40f0,
   0x89, 0x83, 0xea, 0x8d, 0x17, 0xbb, 0xc2, 0xf6
);
DEFINE_GUID(
   FWPM_LAYER_OUTBOUND_TRANSPORT_FAST,
   0x13ed4388,
   0xa070,
   0x4815,
   0x99,0x35,0x7a,0x9b,0xe6,0x40,0x8b,0x78
);
DEFINE_GUID(
   FWPM_LAYER_INBOUND_MAC_FRAME_NATIVE_FAST,
   0x853aaa8e,
   0x2b78,
   0x4d24,
   0xa8,0x04,0x36,0xdb,0x08,0xb2,0x97,0x11
);
DEFINE_GUID(
   FWPM_LAYER_OUTBOUND_MAC_FRAME_NATIVE_FAST,
   0x470df946,
   0xc962,
   0x486f,
   0x94,0x46,0x82,0x93,0xcb,0xc7,0x5e,0xb8
);
DEFINE_GUID(
   FWPM_LAYER_IPSEC_KM_DEMUX_V4,
   0xf02b1526,
   0xa459,
   0x4a51,
   0xb9, 0xe3, 0x75, 0x9d, 0xe5, 0x2b, 0x9d, 0x2c
);
DEFINE_GUID(
   FWPM_LAYER_IPSEC_KM_DEMUX_V6,
   0x2f755cf6,
   0x2fd4,
   0x4e88,
   0xb3, 0xe4, 0xa9, 0x1b, 0xca, 0x49, 0x52, 0x35
);
DEFINE_GUID(
   FWPM_LAYER_IPSEC_V4,
   0xeda65c74,
   0x610d,
   0x4bc5,
   0x94, 0x8f, 0x3c, 0x4f, 0x89, 0x55, 0x68, 0x67
);
DEFINE_GUID(
   FWPM_LAYER_IPSEC_V6,
   0x13c48442,
   0x8d87,
   0x4261,
   0x9a, 0x29, 0x59, 0xd2, 0xab, 0xc3, 0x48, 0xb4
);
DEFINE_GUID(
   FWPM_LAYER_IKEEXT_V4,
   0xb14b7bdb,
   0xdbbd,
   0x473e,
   0xbe, 0xd4, 0x8b, 0x47, 0x08, 0xd4, 0xf2, 0x70
);
DEFINE_GUID(
   FWPM_LAYER_IKEEXT_V6,
   0xb64786b3,
   0xf687,
   0x4eb9,
   0x89, 0xd2, 0x8e, 0xf3, 0x2a, 0xcd, 0xab, 0xe2
);
DEFINE_GUID(
   FWPM_LAYER_RPC_UM,
   0x75a89dda,
   0x95e4,
   0x40f3,
   0xad, 0xc7, 0x76, 0x88, 0xa9, 0xc8, 0x47, 0xe1
);
DEFINE_GUID(
   FWPM_LAYER_RPC_EPMAP,
   0x9247bc61,
   0xeb07,
   0x47ee,
   0x87, 0x2c, 0xbf, 0xd7, 0x8b, 0xfd, 0x16, 0x16
);
DEFINE_GUID(
   FWPM_LAYER_RPC_EP_ADD,
   0x618dffc7,
   0xc450,
   0x4943,
   0x95, 0xdb, 0x99, 0xb4, 0xc1, 0x6a, 0x55, 0xd4
);
DEFINE_GUID(
   FWPM_LAYER_RPC_PROXY_CONN,
   0x94a4b50b,
   0xba5c,
   0x4f27,
   0x90, 0x7a, 0x22, 0x9f, 0xac, 0x0c, 0x2a, 0x7a
);
DEFINE_GUID(
   FWPM_LAYER_RPC_PROXY_IF,
   0xf8a38615,
   0xe12c,
   0x41ac,
   0x98, 0xdf, 0x12, 0x1a, 0xd9, 0x81, 0xaa, 0xde
);
DEFINE_GUID(
   FWPM_LAYER_KM_AUTHORIZATION,
   0x4aa226e9,
   0x9020,
   0x45fb,
   0x95,0x6a, 0xc0, 0x24, 0x9d, 0x84, 0x11, 0x95
);
DEFINE_GUID(
   FWPM_LAYER_NAME_RESOLUTION_CACHE_V4,
   0x0c2aa681,
   0x905b,
   0x4ccd,
   0xa4, 0x67, 0x4d, 0xd8, 0x11, 0xd0, 0x7b, 0x7b
);
DEFINE_GUID(
   FWPM_LAYER_NAME_RESOLUTION_CACHE_V6,
   0x92d592fa,
   0x6b01,
   0x434a,
   0x9d, 0xea, 0xd1, 0xe9, 0x6e, 0xa9, 0x7d, 0xa9
);
DEFINE_GUID(
   FWPM_LAYER_ALE_RESOURCE_RELEASE_V4,
   0x74365cce,
   0xccb0,
   0x401a,
   0xbf, 0xc1, 0xb8, 0x99, 0x34, 0xad, 0x7e, 0x15
);
DEFINE_GUID(
   FWPM_LAYER_ALE_RESOURCE_RELEASE_V6,
   0xf4e5ce80,
   0xedcc,
   0x4e13,
   0x8a, 0x2f, 0xb9, 0x14, 0x54, 0xbb, 0x05, 0x7b
);
DEFINE_GUID(
   FWPM_LAYER_ALE_ENDPOINT_CLOSURE_V4,
   0xb4766427,
   0xe2a2,
   0x467a,
   0xbd, 0x7e, 0xdb, 0xcd, 0x1b, 0xd8, 0x5a, 0x09
);
DEFINE_GUID(
   FWPM_LAYER_ALE_ENDPOINT_CLOSURE_V6,
   0xbb536ccd,
   0x4755,
   0x4ba9,
   0x9f, 0xf7, 0xf9, 0xed, 0xf8, 0x69, 0x9c, 0x7b
);
DEFINE_GUID(
   FWPM_LAYER_ALE_CONNECT_REDIRECT_V4,
   0xc6e63c8c,
   0xb784,
   0x4562,
   0xaa, 0x7d, 0x0a, 0x67, 0xcf, 0xca, 0xf9, 0xa3
);
DEFINE_GUID(
   FWPM_LAYER_ALE_CONNECT_REDIRECT_V6,
   0x587e54a7,
   0x8046,
   0x42ba,
   0xa0, 0xaa, 0xb7, 0x16, 0x25, 0x0f, 0xc7, 0xfd
);
DEFINE_GUID(
   FWPM_LAYER_ALE_BIND_REDIRECT_V4,
   0x66978cad,
   0xc704,
   0x42ac,
   0x86, 0xac, 0x7c, 0x1a, 0x23, 0x1b, 0xd2, 0x53
);
DEFINE_GUID(
   FWPM_LAYER_ALE_BIND_REDIRECT_V6,
   0xbef02c9c,
   0x606b,
   0x4536,
   0x8c, 0x26, 0x1c, 0x2f, 0xc7, 0xb6, 0x31, 0xd4
);
DEFINE_GUID(
   FWPM_LAYER_STREAM_PACKET_V4,
   0xaf52d8ec,
   0xcb2d,
   0x44e5,
   0xad, 0x92, 0xf8, 0xdc, 0x38, 0xd2, 0xeb, 0x29
);
DEFINE_GUID(
   FWPM_LAYER_STREAM_PACKET_V6,
   0x779a8ca3,
   0xf099,
   0x468f,
   0xb5, 0xd4, 0x83, 0x53, 0x5c, 0x46, 0x1c, 0x02
);
DEFINE_GUID(
   FWPM_LAYER_INBOUND_RESERVED2,
   0xf4fb8d55,
   0xc076,
   0x46d8,
   0xa2, 0xc7, 0x6a, 0x4c, 0x72, 0x2c, 0xa4, 0xed
);
DEFINE_GUID(
   FWPM_SUBLAYER_RPC_AUDIT,
   0x758c84f4,
   0xfb48,
   0x4de9,
   0x9a, 0xeb, 0x3e, 0xd9, 0x55, 0x1a, 0xb1, 0xfd
);
DEFINE_GUID(
   FWPM_SUBLAYER_IPSEC_TUNNEL,
   0x83f299ed,
   0x9ff4,
   0x4967,
   0xaf, 0xf4, 0xc3, 0x09, 0xf4, 0xda, 0xb8, 0x27
);
DEFINE_GUID(
   FWPM_SUBLAYER_UNIVERSAL,
   0xeebecc03,
   0xced4,
   0x4380,
   0x81, 0x9a, 0x27, 0x34, 0x39, 0x7b, 0x2b, 0x74
);
DEFINE_GUID(
   FWPM_SUBLAYER_LIPS,
   0x1b75c0ce,
   0xff60,
   0x4711,
   0xa7, 0x0f, 0xb4, 0x95, 0x8c, 0xc3, 0xb2, 0xd0
);
DEFINE_GUID(
   FWPM_SUBLAYER_SECURE_SOCKET,
   0x15a66e17,
   0x3f3c,
   0x4f7b,
   0xaa, 0x6c, 0x81, 0x2a, 0xa6, 0x13, 0xdd, 0x82
);
DEFINE_GUID(
   FWPM_SUBLAYER_TCP_CHIMNEY_OFFLOAD,
   0x337608b9,
   0xb7d5,
   0x4d5f,
   0x82, 0xf9, 0x36, 0x18, 0x61, 0x8b, 0xc0, 0x58
);
DEFINE_GUID(
   FWPM_SUBLAYER_INSPECTION,
   0x877519e1,
   0xe6a9,
   0x41a5,
   0x81, 0xb4, 0x8c, 0x4f, 0x11, 0x8e, 0x4a, 0x60
);
DEFINE_GUID(
   FWPM_SUBLAYER_TEREDO,
   0xba69dc66,
   0x5176,
   0x4979,
   0x9c, 0x89, 0x26, 0xa7, 0xb4, 0x6a, 0x83, 0x27
);
DEFINE_GUID(
   FWPM_SUBLAYER_IPSEC_FORWARD_OUTBOUND_TUNNEL,
   0xa5082e73,
   0x8f71,
   0x4559,
   0x8a, 0x9a, 0x10, 0x1c, 0xea, 0x04, 0xef, 0x87
);
DEFINE_GUID(
   FWPM_SUBLAYER_IPSEC_DOSP,
   0xe076d572,
   0x5d3d,
   0x48ef,
   0x80, 0x2b, 0x90, 0x9e, 0xdd, 0xb0, 0x98, 0xbd
);
DEFINE_GUID(
   FWPM_SUBLAYER_TCP_TEMPLATES,
   0x24421dcf,
   0x0ac5,
   0x4caa,
   0x9e, 0x14, 0x50, 0xf6, 0xe3, 0x63, 0x6a, 0xf0
);
DEFINE_GUID(
   FWPM_SUBLAYER_IPSEC_SECURITY_REALM,
   0x37a57701,
   0x5884,
   0x4964,
   0x92, 0xb8, 0x3e, 0x70, 0x46, 0x88, 0xb0, 0xad
);
DEFINE_GUID(
   FWPM_CONDITION_INTERFACE_MAC_ADDRESS,
   0xf6e63dce,
   0x1f4b,
   0x4c6b,
   0xb6, 0xef, 0x11, 0x65, 0xe7, 0x1f, 0x8e, 0xe7
);
DEFINE_GUID(
   FWPM_CONDITION_MAC_LOCAL_ADDRESS,
   0xd999e981,
   0x7948,
   0x4c83,
   0xb7, 0x42, 0xc8, 0x4e, 0x3b, 0x67, 0x8f, 0x8f
);
DEFINE_GUID(
   FWPM_CONDITION_MAC_REMOTE_ADDRESS,
   0x408f2ed4,
   0x3a70,
   0x4b4d,
   0x92, 0xa6, 0x41, 0x5a, 0xc2, 0x0e, 0x2f, 0x12
);
DEFINE_GUID(
   FWPM_CONDITION_ETHER_TYPE,
   0xfd08948d,
   0xa219,
   0x4d52,
   0xbb, 0x98, 0x1a, 0x55, 0x40, 0xee, 0x7b, 0x4e
);
DEFINE_GUID(
   FWPM_CONDITION_VLAN_ID,
   0x938eab21,
   0x3618,
   0x4e64,
   0x9c, 0xa5, 0x21, 0x41, 0xeb, 0xda, 0x1c, 0xa2
);
DEFINE_GUID(
   FWPM_CONDITION_VSWITCH_TENANT_NETWORK_ID,
   0xdc04843c,
   0x79e6,
   0x4e44,
   0xa0, 0x25, 0x65, 0xb9, 0xbb, 0x0f, 0x9f, 0x94
);
DEFINE_GUID(
   FWPM_CONDITION_NDIS_PORT,
   0xdb7bb42b,
   0x2dac,
   0x4cd4,
   0xa5, 0x9a, 0xe0, 0xbd, 0xce, 0x1e, 0x68, 0x34
);
DEFINE_GUID(
   FWPM_CONDITION_NDIS_MEDIA_TYPE,
   0xcb31cef1,
   0x791d,
   0x473b,
   0x89, 0xd1, 0x61, 0xc5, 0x98, 0x43, 0x04, 0xa0
);
DEFINE_GUID(
   FWPM_CONDITION_NDIS_PHYSICAL_MEDIA_TYPE,
   0x34c79823,
   0xc229,
   0x44f2,
   0xb8, 0x3c, 0x74, 0x02, 0x08, 0x82, 0xae, 0x77
);
DEFINE_GUID(
   FWPM_CONDITION_L2_FLAGS,
   0x7bc43cbf,
   0x37ba,
   0x45f1,
   0xb7, 0x4a, 0x82, 0xff, 0x51, 0x8e, 0xeb, 0x10
);
DEFINE_GUID(
   FWPM_CONDITION_MAC_LOCAL_ADDRESS_TYPE,
   0xcc31355c,
   0x3073,
   0x4ffb,
   0xa1, 0x4f, 0x79, 0x41, 0x5c, 0xb1, 0xea, 0xd1
);
DEFINE_GUID(
   FWPM_CONDITION_MAC_REMOTE_ADDRESS_TYPE,
   0x027fedb4,
   0xf1c1,
   0x4030,
   0xb5, 0x64, 0xee, 0x77, 0x7f, 0xd8, 0x67, 0xea
);
DEFINE_GUID(
   FWPM_CONDITION_ALE_PACKAGE_ID,
   0x71bc78fa,
   0xf17c,
   0x4997,
   0xa6, 0x2, 0x6a, 0xbb, 0x26, 0x1f, 0x35, 0x1c
);
DEFINE_GUID(
   FWPM_CONDITION_MAC_SOURCE_ADDRESS,
   0x7b795451,
   0xf1f6,
   0x4d05,
   0xb7, 0xcb, 0x21, 0x77, 0x9d, 0x80, 0x23, 0x36
);
DEFINE_GUID(
   FWPM_CONDITION_MAC_DESTINATION_ADDRESS,
   0x04ea2a93,
   0x858c,
   0x4027,
   0xb6, 0x13, 0xb4, 0x31, 0x80, 0xc7, 0x85, 0x9e
);
DEFINE_GUID(
   FWPM_CONDITION_MAC_SOURCE_ADDRESS_TYPE,
   0x5c1b72e4,
   0x299e,
   0x4437,
   0xa2, 0x98, 0xbc, 0x3f, 0x01, 0x4b, 0x3d, 0xc2
);
DEFINE_GUID(
   FWPM_CONDITION_MAC_DESTINATION_ADDRESS_TYPE,
   0xae052932,
   0xef42,
   0x4e99,
   0xb1, 0x29, 0xf3, 0xb3, 0x13, 0x9e, 0x34, 0xf7
);
DEFINE_GUID(
   FWPM_CONDITION_IP_SOURCE_PORT,
   0xa6afef91,
   0x3df4,
   0x4730,
   0xa2, 0x14, 0xf5, 0x42, 0x6a, 0xeb, 0xf8, 0x21
);
DEFINE_GUID(
   FWPM_CONDITION_IP_DESTINATION_PORT,
   0xce6def45,
   0x60fb,
   0x4a7b,
   0xa3, 0x04, 0xaf, 0x30, 0xa1, 0x17, 0x00, 0x0e
);
DEFINE_GUID(
   FWPM_CONDITION_VSWITCH_ID,
   0xc4a414ba,
   0x437b,
   0x4de6,
   0x99, 0x46, 0xd9, 0x9c, 0x1b, 0x95, 0xb3, 0x12
);
DEFINE_GUID(
   FWPM_CONDITION_VSWITCH_NETWORK_TYPE,
   0x11d48b4b,
   0xe77a,
   0x40b4,
   0x91, 0x55, 0x39, 0x2c, 0x90, 0x6c, 0x26, 0x08
);
DEFINE_GUID(
   FWPM_CONDITION_VSWITCH_SOURCE_INTERFACE_ID,
   0x7f4ef24b,
   0xb2c1,
   0x4938,
   0xba, 0x33, 0xa1, 0xec, 0xbe, 0xd5, 0x12, 0xba
);
DEFINE_GUID(
   FWPM_CONDITION_VSWITCH_DESTINATION_INTERFACE_ID,
   0x8ed48be4,
   0xc926,
   0x49f6,
   0xa4, 0xf6, 0xef, 0x30, 0x30, 0xe3, 0xfc, 0x16
);
DEFINE_GUID(
   FWPM_CONDITION_VSWITCH_SOURCE_VM_ID,
   0x9c2a9ec2,
   0x9fc6,
   0x42bc,
   0xbd, 0xd8, 0x40, 0x6d, 0x4d, 0xa0, 0xbe, 0x64
);
DEFINE_GUID(
   FWPM_CONDITION_VSWITCH_DESTINATION_VM_ID,
   0x6106aace,
   0x4de1,
   0x4c84,
   0x96, 0x71, 0x36, 0x37, 0xf8, 0xbc, 0xf7, 0x31
);
DEFINE_GUID(
   FWPM_CONDITION_VSWITCH_SOURCE_INTERFACE_TYPE,
   0xe6b040a2,
   0xedaf,
   0x4c36,
   0x90, 0x8b, 0xf2, 0xf5, 0x8a, 0xe4, 0x38, 0x07
);
DEFINE_GUID(
   FWPM_CONDITION_VSWITCH_DESTINATION_INTERFACE_TYPE,
   0xfa9b3f06,
   0x2f1a,
   0x4c57,
   0x9e, 0x68, 0xa7, 0x09, 0x8b, 0x28, 0xdb, 0xfe
);
DEFINE_GUID(
   FWPM_CONDITION_ALE_SECURITY_ATTRIBUTE_FQBN_VALUE,
   0x37a57699,
   0x5883,
   0x4963,
   0x92, 0xb8, 0x3e, 0x70, 0x46, 0x88, 0xb0, 0xad
);
DEFINE_GUID(
   FWPM_CONDITION_IPSEC_SECURITY_REALM_ID,
   0x37a57700,
   0x5884,
   0x4964,
   0x92, 0xb8, 0x3e, 0x70, 0x46, 0x88, 0xb0, 0xad
);
DEFINE_GUID(
    FWPM_CONDITION_ALE_EFFECTIVE_NAME,
    0xb1277b9a,
    0xb781,
    0x40fc,
    0x96, 0x71, 0xe5, 0xf1, 0xb9, 0x89, 0xf3, 0x4e
);
DEFINE_GUID(
   FWPM_CONDITION_IP_LOCAL_ADDRESS,
   0xd9ee00de,
   0xc1ef,
   0x4617,
   0xbf, 0xe3, 0xff, 0xd8, 0xf5, 0xa0, 0x89, 0x57
);
DEFINE_GUID(
   FWPM_CONDITION_IP_REMOTE_ADDRESS,
   0xb235ae9a,
   0x1d64,
   0x49b8,
   0xa4, 0x4c, 0x5f, 0xf3, 0xd9, 0x09, 0x50, 0x45
);
DEFINE_GUID(
   FWPM_CONDITION_IP_SOURCE_ADDRESS,
   0xae96897e,
   0x2e94,
   0x4bc9,
   0xb3, 0x13, 0xb2, 0x7e, 0xe8, 0x0e, 0x57, 0x4d
);
DEFINE_GUID(
   FWPM_CONDITION_IP_DESTINATION_ADDRESS,
   0x2d79133b,
   0xb390,
   0x45c6,
   0x86, 0x99, 0xac, 0xac, 0xea, 0xaf, 0xed, 0x33
);
DEFINE_GUID(
   FWPM_CONDITION_IP_LOCAL_ADDRESS_TYPE,
   0x6ec7f6c4,
   0x376b,
   0x45d7,
   0x9e, 0x9c, 0xd3, 0x37, 0xce, 0xdc, 0xd2, 0x37
);
DEFINE_GUID(
   FWPM_CONDITION_IP_DESTINATION_ADDRESS_TYPE,
   0x1ec1b7c9,
   0x4eea,
   0x4f5e,
   0xb9, 0xef, 0x76, 0xbe, 0xaa, 0xaf, 0x17, 0xee
);
DEFINE_GUID(FWPM_CONDITION_BITMAP_IP_LOCAL_ADDRESS,
   0x16ebc3df,
   0x957a,
   0x452e,
   0xa1, 0xfc, 0x3d, 0x2f, 0xf6, 0xa7, 0x30, 0xba
);
DEFINE_GUID(FWPM_CONDITION_BITMAP_IP_LOCAL_PORT,
   0x9f90a920,
   0xc3b5,
   0x4569,
   0xba, 0x31, 0x8b, 0xd3, 0x91, 0xd, 0xc6, 0x56
);
DEFINE_GUID(FWPM_CONDITION_BITMAP_IP_REMOTE_ADDRESS,
 0x33f00e25,
 0x8eec,
 0x4531,
 0xa0, 0x5, 0x41, 0xb9, 0x11, 0xf6, 0x24, 0x52
);
DEFINE_GUID(FWPM_CONDITION_BITMAP_IP_REMOTE_PORT,
   0x2663d549,
   0xaaf2,
   0x46a2,
   0x86, 0x66, 0x1e, 0x76, 0x67, 0xf8, 0x69, 0x85
);
DEFINE_GUID(
   FWPM_CONDITION_IP_NEXTHOP_ADDRESS,
   0xeabe448a,
   0xa711,
   0x4d64,
   0x85, 0xb7, 0x3f, 0x76, 0xb6, 0x52, 0x99, 0xc7
);
DEFINE_GUID(FWPM_CONDITION_BITMAP_INDEX_KEY,
   0xf36514c,
   0x3226,
   0x4a81,
   0xa2, 0x14, 0x2d, 0x51, 0x8b, 0x4, 0xd0, 0x8a
);
DEFINE_GUID(
   FWPM_CONDITION_IP_LOCAL_INTERFACE,
   0x4cd62a49,
   0x59c3,
   0x4969,
   0xb7, 0xf3, 0xbd, 0xa5, 0xd3, 0x28, 0x90, 0xa4
);
DEFINE_GUID(
   FWPM_CONDITION_IP_ARRIVAL_INTERFACE,
   0x618a9b6d,
   0x386b,
   0x4136,
   0xad, 0x6e, 0xb5, 0x15, 0x87, 0xcf, 0xb1, 0xcd
);
DEFINE_GUID(
   FWPM_CONDITION_ARRIVAL_INTERFACE_TYPE,
   0x89f990de,
   0xe798,
   0x4e6d,
   0xab, 0x76, 0x7c, 0x95, 0x58, 0x29, 0x2e, 0x6f
);
DEFINE_GUID(
   FWPM_CONDITION_ARRIVAL_TUNNEL_TYPE,
   0x511166dc,
   0x7a8c,
   0x4aa7,
   0xb5, 0x33, 0x95, 0xab, 0x59, 0xfb, 0x03, 0x40
);
DEFINE_GUID(
   FWPM_CONDITION_ARRIVAL_INTERFACE_INDEX,
   0xcc088db3,
   0x1792,
   0x4a71,
   0xb0, 0xf9, 0x03, 0x7d, 0x21, 0xcd, 0x82, 0x8b
);
DEFINE_GUID(
   FWPM_CONDITION_NEXTHOP_SUB_INTERFACE_INDEX,
   0xef8a6122,
   0x0577,
   0x45a7,
   0x9a, 0xaf, 0x82, 0x5f, 0xbe, 0xb4, 0xfb, 0x95
);
DEFINE_GUID(
   FWPM_CONDITION_IP_NEXTHOP_INTERFACE,
   0x93ae8f5b,
   0x7f6f,
   0x4719,
   0x98, 0xc8, 0x14, 0xe9, 0x74, 0x29, 0xef, 0x04
);
DEFINE_GUID(
   FWPM_CONDITION_NEXTHOP_INTERFACE_TYPE,
   0x97537c6c,
   0xd9a3,
   0x4767,
   0xa3, 0x81, 0xe9, 0x42, 0x67, 0x5c, 0xd9, 0x20
);
DEFINE_GUID(
   FWPM_CONDITION_NEXTHOP_TUNNEL_TYPE,
   0x72b1a111,
   0x987b,
   0x4720,
   0x99, 0xdd, 0xc7, 0xc5, 0x76, 0xfa, 0x2d, 0x4c
);
DEFINE_GUID(
   FWPM_CONDITION_NEXTHOP_INTERFACE_INDEX,
   0x138e6888,
   0x7ab8,
   0x4d65,
   0x9e, 0xe8, 0x05, 0x91, 0xbc, 0xf6, 0xa4, 0x94
);
DEFINE_GUID(
   FWPM_CONDITION_ORIGINAL_PROFILE_ID,
   0x46ea1551,
   0x2255,
   0x492b,
   0x80, 0x19, 0xaa, 0xbe, 0xee, 0x34, 0x9f, 0x40
);
DEFINE_GUID(
   FWPM_CONDITION_CURRENT_PROFILE_ID,
   0xab3033c9,
   0xc0e3,
   0x4759,
   0x93, 0x7d, 0x57, 0x58, 0xc6, 0x5d, 0x4a, 0xe3
);
DEFINE_GUID(
   FWPM_CONDITION_LOCAL_INTERFACE_PROFILE_ID,
   0x4ebf7562,
   0x9f18,
   0x4d06,
   0x99, 0x41, 0xa7, 0xa6, 0x25, 0x74, 0x4d, 0x71
);
DEFINE_GUID(
   FWPM_CONDITION_ARRIVAL_INTERFACE_PROFILE_ID,
   0xcdfe6aab,
   0xc083,
   0x4142,
   0x86, 0x79, 0xc0, 0x8f, 0x95, 0x32, 0x9c, 0x61
);
DEFINE_GUID(
   FWPM_CONDITION_NEXTHOP_INTERFACE_PROFILE_ID,
   0xd7ff9a56,
   0xcdaa,
   0x472b,
   0x84, 0xdb, 0xd2, 0x39, 0x63, 0xc1, 0xd1, 0xbf
);
DEFINE_GUID(
   FWPM_CONDITION_REAUTHORIZE_REASON,
   0x11205e8c,
   0x11ae,
   0x457a,
   0x8a, 0x44, 0x47, 0x70, 0x26, 0xdd, 0x76, 0x4a
);
DEFINE_GUID(
   FWPM_CONDITION_ORIGINAL_ICMP_TYPE,
   0x076dfdbe,
   0xc56c,
   0x4f72,
   0xae, 0x8a, 0x2c, 0xfe, 0x7e, 0x5c, 0x82, 0x86
);
DEFINE_GUID(
   FWPM_CONDITION_IP_PHYSICAL_ARRIVAL_INTERFACE,
   0xda50d5c8,
   0xfa0d,
   0x4c89,
   0xb0, 0x32, 0x6e, 0x62, 0x13, 0x6d, 0x1e, 0x96
);
DEFINE_GUID(
   FWPM_CONDITION_IP_PHYSICAL_NEXTHOP_INTERFACE,
   0xf09bd5ce,
   0x5150,
   0x48be,
   0xb0, 0x98, 0xc2, 0x51, 0x52, 0xfb, 0x1f, 0x92
);
DEFINE_GUID(
   FWPM_CONDITION_INTERFACE_QUARANTINE_EPOCH,
   0xcce68d5e,
   0x053b,
   0x43a8,
   0x9a, 0x6f, 0x33, 0x38, 0x4c, 0x28, 0xe4, 0xf6
);
DEFINE_GUID(
   FWPM_CONDITION_INTERFACE_TYPE,
   0xdaf8cd14,
   0xe09e,
   0x4c93,
   0xa5, 0xae, 0xc5, 0xc1, 0x3b, 0x73, 0xff, 0xca
);
DEFINE_GUID(
   FWPM_CONDITION_TUNNEL_TYPE,
   0x77a40437,
   0x8779,
   0x4868,
   0xa2, 0x61, 0xf5, 0xa9, 0x02, 0xf1, 0xc0, 0xcd
);
DEFINE_GUID(
   FWPM_CONDITION_IP_FORWARD_INTERFACE,
   0x1076b8a5,
   0x6323,
   0x4c5e,
   0x98, 0x10, 0xe8, 0xd3, 0xfc, 0x9e, 0x61, 0x36
);
DEFINE_GUID(
   FWPM_CONDITION_IP_PROTOCOL,
   0x3971ef2b,
   0x623e,
   0x4f9a,
   0x8c, 0xb1, 0x6e, 0x79, 0xb8, 0x06, 0xb9, 0xa7
);
DEFINE_GUID(
   FWPM_CONDITION_IP_LOCAL_PORT,
   0x0c1ba1af,
   0x5765,
   0x453f,
   0xaf, 0x22, 0xa8, 0xf7, 0x91, 0xac, 0x77, 0x5b
);
DEFINE_GUID(
   FWPM_CONDITION_IP_REMOTE_PORT,
   0xc35a604d,
   0xd22b,
   0x4e1a,
   0x91, 0xb4, 0x68, 0xf6, 0x74, 0xee, 0x67, 0x4b
);
DEFINE_GUID(
   FWPM_CONDITION_EMBEDDED_LOCAL_ADDRESS_TYPE,
   0x4672a468,
   0x8a0a,
   0x4202,
   0xab, 0xb4, 0x84, 0x9e, 0x92, 0xe6, 0x68, 0x09
);
DEFINE_GUID(
   FWPM_CONDITION_EMBEDDED_REMOTE_ADDRESS,
   0x77ee4b39,
   0x3273,
   0x4671,
   0xb6, 0x3b, 0xab, 0x6f, 0xeb, 0x66, 0xee, 0xb6
);
DEFINE_GUID(
   FWPM_CONDITION_EMBEDDED_PROTOCOL,
   0x07784107,
   0xa29e,
   0x4c7b,
   0x9e, 0xc7, 0x29, 0xc4, 0x4a, 0xfa, 0xfd, 0xbc
);
DEFINE_GUID(
   FWPM_CONDITION_EMBEDDED_LOCAL_PORT,
   0xbfca394d,
   0xacdb,
   0x484e,
   0xb8, 0xe6, 0x2a, 0xff, 0x79, 0x75, 0x73, 0x45
);
DEFINE_GUID(
   FWPM_CONDITION_EMBEDDED_REMOTE_PORT,
   0xcae4d6a1,
   0x2968,
   0x40ed,
   0xa4, 0xce, 0x54, 0x71, 0x60, 0xdd, 0xa8, 0x8d
);
DEFINE_GUID(
   FWPM_CONDITION_FLAGS,
   0x632ce23b,
   0x5167,
   0x435c,
   0x86, 0xd7, 0xe9, 0x03, 0x68, 0x4a, 0xa8, 0x0c
);
DEFINE_GUID(
   FWPM_CONDITION_DIRECTION,
   0x8784c146,
   0xca97,
   0x44d6,
   0x9f, 0xd1, 0x19, 0xfb, 0x18, 0x40, 0xcb, 0xf7
);
DEFINE_GUID(
   FWPM_CONDITION_INTERFACE_INDEX,
   0x667fd755,
   0xd695,
   0x434a,
   0x8a, 0xf5, 0xd3, 0x83, 0x5a, 0x12, 0x59, 0xbc
);
DEFINE_GUID(
   FWPM_CONDITION_SUB_INTERFACE_INDEX,
   0x0cd42473,
   0xd621,
   0x4be3,
   0xae, 0x8c, 0x72, 0xa3, 0x48, 0xd2, 0x83, 0xe1
);
        FWPM_CONDITION_SUB_INTERFACE_INDEX
DEFINE_GUID(
   FWPM_CONDITION_SOURCE_INTERFACE_INDEX,
   0x2311334d,
   0xc92d,
   0x45bf,
   0x94, 0x96, 0xed, 0xf4, 0x47, 0x82, 0x0e, 0x2d
);
DEFINE_GUID(
   FWPM_CONDITION_SOURCE_SUB_INTERFACE_INDEX,
   0x055edd9d,
   0xacd2,
   0x4361,
   0x8d, 0xab, 0xf9, 0x52, 0x5d, 0x97, 0x66, 0x2f
);
DEFINE_GUID(
   FWPM_CONDITION_DESTINATION_INTERFACE_INDEX,
   0x35cf6522,
   0x4139,
   0x45ee,
   0xa0, 0xd5, 0x67, 0xb8, 0x09, 0x49, 0xd8, 0x79
);
DEFINE_GUID(
   FWPM_CONDITION_DESTINATION_SUB_INTERFACE_INDEX,
   0x2b7d4399,
   0xd4c7,
   0x4738,
   0xa2, 0xf5, 0xe9, 0x94, 0xb4, 0x3d, 0xa3, 0x88
);
DEFINE_GUID(
   FWPM_CONDITION_ALE_APP_ID,
   0xd78e1e87,
   0x8644,
   0x4ea5,
   0x94, 0x37, 0xd8, 0x09, 0xec, 0xef, 0xc9, 0x71
);
DEFINE_GUID(
   FWPM_CONDITION_ALE_ORIGINAL_APP_ID,
   0x0e6cd086,
   0xe1fb,
   0x4212,
   0x84, 0x2f, 0x8a, 0x9f, 0x99, 0x3f, 0xb3, 0xf6
);
DEFINE_GUID(
   FWPM_CONDITION_ALE_USER_ID,
   0xaf043a0a,
   0xb34d,
   0x4f86,
   0x97, 0x9c, 0xc9, 0x03, 0x71, 0xaf, 0x6e, 0x66
);
DEFINE_GUID(
   FWPM_CONDITION_ALE_REMOTE_USER_ID,
   0xf63073b7,
   0x0189,
   0x4ab0,
   0x95, 0xa4, 0x61, 0x23, 0xcb, 0xfa, 0xb8, 0x62
);
DEFINE_GUID(
   FWPM_CONDITION_ALE_REMOTE_MACHINE_ID,
   0x1aa47f51,
   0x7f93,
   0x4508,
   0xa2, 0x71, 0x81, 0xab, 0xb0, 0x0c, 0x9c, 0xab
);
DEFINE_GUID(
   FWPM_CONDITION_ALE_PROMISCUOUS_MODE,
   0x1c974776,
   0x7182,
   0x46e9,
   0xaf, 0xd3, 0xb0, 0x29, 0x10, 0xe3, 0x03, 0x34
);
DEFINE_GUID(
   FWPM_CONDITION_ALE_SIO_FIREWALL_SYSTEM_PORT,
   0xb9f4e088,
   0xcb98,
   0x4efb,
   0xa2, 0xc7, 0xad, 0x07, 0x33, 0x26, 0x43, 0xdb
);
        FWPM_CONDITION_ALE_SIO_FIREWALL_SYSTEM_PORT
DEFINE_GUID(
   FWPM_CONDITION_ALE_REAUTH_REASON,
   0xb482d227,
   0x1979,
   0x4a98,
   0x80, 0x44, 0x18, 0xbb, 0xe6, 0x23, 0x75, 0x42
);
DEFINE_GUID(
   FWPM_CONDITION_ALE_NAP_CONTEXT,
   0x46275a9d,
   0xc03f,
   0x4d77,
   0xb7, 0x84, 0x1c, 0x57, 0xf4, 0xd0, 0x27, 0x53
);
DEFINE_GUID(
   FWPM_CONDITION_KM_AUTH_NAP_CONTEXT,
   0x35d0ea0e,
   0x15ca,
   0x492b,
   0x90, 0x0e, 0x97, 0xfd, 0x46, 0x35, 0x2c, 0xce
);
DEFINE_GUID(
    FWPM_CONDITION_REMOTE_USER_TOKEN,
    0x9bf0ee66,
    0x06c9,
    0x41b9,
    0x84, 0xda, 0x28, 0x8c, 0xb4, 0x3a, 0xf5, 0x1f
);
DEFINE_GUID(
   FWPM_CONDITION_RPC_IF_UUID,
   0x7c9c7d9f,
   0x0075,
   0x4d35,
   0xa0, 0xd1, 0x83, 0x11, 0xc4, 0xcf, 0x6a, 0xf1
);
DEFINE_GUID(
   FWPM_CONDITION_RPC_IF_VERSION,
   0xeabfd9b7,
   0x1262,
   0x4a2e,
   0xad, 0xaa, 0x5f, 0x96, 0xf6, 0xfe, 0x32, 0x6d
);
DEFINE_GUID(
    FWPM_CONDITION_RPC_IF_FLAG,
    0x238a8a32,
    0x3199,
    0x467d,
    0x87, 0x1c, 0x27, 0x26, 0x21, 0xab, 0x38, 0x96
);
DEFINE_GUID(
    FWPM_CONDITION_DCOM_APP_ID,
    0xff2e7b4d,
    0x3112,
    0x4770,
    0xb6, 0x36, 0x4d, 0x24, 0xae, 0x3a, 0x6a, 0xf2
);
DEFINE_GUID(
    FWPM_CONDITION_IMAGE_NAME,
    0xd024de4d,
    0xdeaa,
    0x4317,
    0x9c, 0x85, 0xe4, 0x0e, 0xf6, 0xe1, 0x40, 0xc3
);
DEFINE_GUID(
    FWPM_CONDITION_RPC_PROTOCOL,
    0x2717bc74,
    0x3a35,
    0x4ce7,
    0xb7, 0xef, 0xc8, 0x38, 0xfa, 0xbd, 0xec, 0x45
);
DEFINE_GUID(
   FWPM_CONDITION_RPC_AUTH_TYPE,
   0xdaba74ab,
   0x0d67,
   0x43e7,
   0x98, 0x6e, 0x75, 0xb8, 0x4f, 0x82, 0xf5, 0x94
);
DEFINE_GUID(
   FWPM_CONDITION_RPC_AUTH_LEVEL,
   0xe5a0aed5,
   0x59ac,
   0x46ea,
   0xbe, 0x05, 0xa5, 0xf0, 0x5e, 0xcf, 0x44, 0x6e
);
DEFINE_GUID(
   FWPM_CONDITION_SEC_ENCRYPT_ALGORITHM,
   0x0d306ef0,
   0xe974,
   0x4f74,
   0xb5, 0xc7, 0x59, 0x1b, 0x0d, 0xa7, 0xd5, 0x62
);
DEFINE_GUID(
    FWPM_CONDITION_SEC_KEY_SIZE,
    0x4772183b,
    0xccf8,
    0x4aeb,
    0xbc, 0xe1, 0xc6, 0xc6, 0x16, 0x1c, 0x8f, 0xe4
);
DEFINE_GUID(
   FWPM_CONDITION_IP_LOCAL_ADDRESS_V4,
   0x03a629cb,
   0x6e52,
   0x49f8,
   0x9c, 0x41, 0x57, 0x09, 0x63, 0x3c, 0x09, 0xcf
);
DEFINE_GUID(
   FWPM_CONDITION_IP_LOCAL_ADDRESS_V6,
   0x2381be84,
   0x7524,
   0x45b3,
   0xa0, 0x5b, 0x1e, 0x63, 0x7d, 0x9c, 0x7a, 0x6a
);
DEFINE_GUID(
    FWPM_CONDITION_PIPE,
    0x1bd0741d,
    0xe3df,
    0x4e24,
    0x86, 0x34, 0x76, 0x20, 0x46, 0xee, 0xf6, 0xeb
);
DEFINE_GUID(
   FWPM_CONDITION_IP_REMOTE_ADDRESS_V4,
   0x1febb610,
   0x3bcc,
   0x45e1,
   0xbc, 0x36, 0x2e, 0x06, 0x7e, 0x2c, 0xb1, 0x86
);
DEFINE_GUID(
   FWPM_CONDITION_IP_REMOTE_ADDRESS_V6,
   0x246e1d8c,
   0x8bee,
   0x4018,
   0x9b, 0x98, 0x31, 0xd4, 0x58, 0x2f, 0x33, 0x61
);
DEFINE_GUID(
    FWPM_CONDITION_PROCESS_WITH_RPC_IF_UUID,
    0xe31180a8,
    0xbbbd,
    0x4d14,
    0xa6, 0x5e, 0x71, 0x57, 0xb0, 0x62, 0x33, 0xbb
);
DEFINE_GUID(
    FWPM_CONDITION_RPC_EP_VALUE,
    0xdccea0b9,
    0x0886,
    0x4360,
    0x9c, 0x6a, 0xab, 0x04, 0x3a, 0x24, 0xfb, 0xa9
);
DEFINE_GUID(
    FWPM_CONDITION_RPC_EP_FLAGS,
    0x218b814a,
    0x0a39,
    0x49b8,
    0x8e, 0x71, 0xc2, 0x0c, 0x39, 0xc7, 0xdd, 0x2e
);
DEFINE_GUID(
    FWPM_CONDITION_CLIENT_TOKEN,
    0xc228fc1e,
    0x403a,
    0x4478,
    0xbe, 0x05, 0xc9, 0xba, 0xa4, 0xc0, 0x5a, 0xce
);
DEFINE_GUID(
    FWPM_CONDITION_RPC_SERVER_NAME,
    0xb605a225,
    0xc3b3,
    0x48c7,
    0x98, 0x33, 0x7a, 0xef, 0xa9, 0x52, 0x75, 0x46
);
DEFINE_GUID(
    FWPM_CONDITION_RPC_SERVER_PORT,
    0x8090f645,
    0x9ad5,
    0x4e3b,
    0x9f, 0x9f, 0x80, 0x23, 0xca, 0x09, 0x79, 0x09
);
DEFINE_GUID(
    FWPM_CONDITION_RPC_PROXY_AUTH_TYPE,
    0x40953fe2,
    0x8565,
    0x4759,
    0x84, 0x88, 0x17, 0x71, 0xb4, 0xb4, 0xb5, 0xdb
);
DEFINE_GUID(
    FWPM_CONDITION_CLIENT_CERT_KEY_LENGTH,
    0xa3ec00c7,
    0x05f4,
    0x4df7,
    0x91, 0xf2, 0x5f, 0x60, 0xd9, 0x1f, 0xf4, 0x43
);
DEFINE_GUID(
    FWPM_CONDITION_CLIENT_CERT_OID,
    0xc491ad5e,
    0xf882,
    0x4283,
    0xb9, 0x16, 0x43, 0x6b, 0x10, 0x3f, 0xf4, 0xad
);
DEFINE_GUID(
   FWPM_CONDITION_NET_EVENT_TYPE,
   0x206e9996,
   0x490e,
   0x40cf,
   0xb8, 0x31, 0xb3, 0x86, 0x41, 0xeb, 0x6f, 0xcb
);
DEFINE_GUID(
   FWPM_CONDITION_PEER_NAME,
   0x9b539082,
   0xeb90,
   0x4186,
   0xa6, 0xcc, 0xde, 0x5b, 0x63, 0x23, 0x50, 0x16
);
DEFINE_GUID(
   FWPM_CONDITION_REMOTE_ID,
   0xf68166fd,
   0x0682,
   0x4c89,
   0xb8, 0xf5, 0x86, 0x43, 0x6c, 0x7e, 0xf9, 0xb7
);
DEFINE_GUID(
   FWPM_CONDITION_AUTHENTICATION_TYPE,
   0xeb458cd5,
   0xda7b,
   0x4ef9,
   0x8d, 0x43, 0x7b, 0x0a, 0x84, 0x03, 0x32, 0xf2
);
DEFINE_GUID(
   FWPM_CONDITION_KM_TYPE,
   0xff0f5f49,
   0x0ceb,
   0x481b,
   0x86, 0x38, 0x14, 0x79, 0x79, 0x1f, 0x3f, 0x2c
);
DEFINE_GUID(
   FWPM_CONDITION_KM_MODE,
   0xfeef4582,
   0xef8f,
   0x4f7b,
   0x85, 0x8b, 0x90, 0x77, 0xd1, 0x22, 0xde, 0x47
);
DEFINE_GUID(
   FWPM_CONDITION_IPSEC_POLICY_KEY,
   0xad37dee3,
   0x722f,
   0x45cc,
   0xa4, 0xe3, 0x06, 0x80, 0x48, 0x12, 0x44, 0x52
);
DEFINE_GUID(
   FWPM_CONDITION_QM_MODE,
   0xf64fc6d1,
   0xf9cb,
   0x43d2,
   0x8a, 0x5f, 0xe1, 0x3b, 0xc8, 0x94, 0xf2, 0x65
);
DEFINE_GUID(
    FWPM_CONDITION_COMPARTMENT_ID,
    0x35a791ab,
    0x4ac,
    0x4ff2,
    0xa6, 0xbb, 0xda, 0x6c, 0xfa, 0xc7, 0x18, 0x6
);
DEFINE_GUID(
   FWPM_CONDITION_RESERVED0,
   0x678f4deb,
   0x45af,
   0x4882,
   0x93, 0xfe, 0x19, 0xd4, 0x72, 0x9d, 0x98, 0x34
   );
DEFINE_GUID(
   FWPM_CONDITION_RESERVED1,
   0xd818f827,
   0x5c69,
   0x48eb,
   0xbf, 0x80, 0xd8, 0x6b, 0x17, 0x75, 0x5f, 0x97
   );
DEFINE_GUID(
   FWPM_CONDITION_RESERVED2,
   0x53d4123d,
   0xe15b,
   0x4e84,
   0xb7, 0xa8,0xdc, 0xe1, 0x6f, 0x7b, 0x62, 0xd9
   );
DEFINE_GUID(
   FWPM_CONDITION_RESERVED3,
   0x7f6e8ca3,
   0x6606,
   0x4932,
   0x97, 0xc7, 0xe1, 0xf2, 0x07, 0x10, 0xaf, 0x3b
   );
DEFINE_GUID(
   FWPM_CONDITION_RESERVED4,
   0x5f58e642,
   0xb937,
   0x495e,
   0xa9, 0x4b, 0xf6, 0xb0, 0x51, 0xa4, 0x92, 0x50
);
DEFINE_GUID(
   FWPM_CONDITION_RESERVED5,
   0x9ba8f6cd,
   0xf77c,
   0x43e6,
   0x88, 0x47, 0x11, 0x93, 0x9d, 0xc5, 0xdb, 0x5a
);
DEFINE_GUID(
    FWPM_CONDITION_RESERVED6,
    0xf13d84bd,
    0x59d5,
    0x44c4,
    0x88, 0x17, 0x5e, 0xcd, 0xae, 0x18, 0x05, 0xbd
);
DEFINE_GUID(
    FWPM_CONDITION_RESERVED7,
    0x65a0f930,
    0x45dd,
    0x4983,
    0xaa, 0x33, 0xef, 0xc7, 0xb6, 0x11, 0xaf, 0x08
);
DEFINE_GUID(
    FWPM_CONDITION_RESERVED8,
    0x4f424974,
    0x0c12,
    0x4816,
    0x9b, 0x47, 0x9a, 0x54, 0x7d, 0xb3, 0x9a, 0x32
);
DEFINE_GUID(
    FWPM_CONDITION_RESERVED9,
    0xce78e10f,
    0x13ff,
    0x4c70,
    0x86, 0x43, 0x36, 0xad, 0x18, 0x79, 0xaf, 0xa3
);
DEFINE_GUID(
    FWPM_CONDITION_RESERVED10,
    0xb979e282,
    0xd621,
    0x4c8c,
    0xb1, 0x84, 0xb1, 0x05, 0xa6, 0x1c, 0x36, 0xce
);
DEFINE_GUID(
    FWPM_CONDITION_RESERVED11,
    0x2d62ee4d,
    0x023d,
    0x411f,
    0x95, 0x82, 0x43, 0xac, 0xbb, 0x79, 0x59, 0x75
);
DEFINE_GUID(
    FWPM_CONDITION_RESERVED12,
    0xa3677c32,
    0x7e35,
    0x4ddc,
    0x93, 0xda, 0xe8, 0xc3, 0x3f, 0xc9, 0x23, 0xc7
);
DEFINE_GUID(
    FWPM_CONDITION_RESERVED13,
    0x335a3e90,
    0x84aa,
    0x42f5,
    0x9e, 0x6f, 0x59, 0x30, 0x95, 0x36, 0xa4, 0x4c
);
DEFINE_GUID(
    FWPM_CONDITION_RESERVED14,
    0x30e44da2,
    0x2f1a,
    0x4116,
    0xa5, 0x59, 0xf9, 0x07, 0xde, 0x83, 0x60, 0x4a
);
DEFINE_GUID(
    FWPM_CONDITION_RESERVED15,
    0xbab8340f,
    0xafe0,
    0x43d1,
    0x80, 0xd8, 0x5c, 0xa4, 0x56, 0x96, 0x2d, 0xe3
);
DEFINE_GUID(
   FWPM_PROVIDER_IKEEXT,
   0x10ad9216,
   0xccde,
   0x456c,
   0x8b, 0x16, 0xe9, 0xf0, 0x4e, 0x60, 0xa9, 0x0b
);
DEFINE_GUID(
   FWPM_PROVIDER_IPSEC_DOSP_CONFIG,
   0x3c6c05a9,
   0xc05c,
   0x4bb9,
   0x83, 0x38, 0x23, 0x27, 0x81, 0x4c, 0xe8, 0xbf
);
DEFINE_GUID(
   FWPM_PROVIDER_TCP_CHIMNEY_OFFLOAD,
   0x896aa19e,
   0x9a34,
   0x4bcb,
   0xae, 0x79, 0xbe, 0xb9, 0x12, 0x7c, 0x84, 0xb9
);
DEFINE_GUID(
   FWPM_PROVIDER_TCP_TEMPLATES,
   0x76cfcd30,
   0x3394,
   0x432d,
   0xbe, 0xd3, 0x44, 0x1a, 0xe5, 0x0e, 0x63, 0xc3
);
DEFINE_GUID(
   FWPM_CALLOUT_IPSEC_INBOUND_TRANSPORT_V4,
   0x5132900d,
   0x5e84,
   0x4b5f,
   0x80, 0xe4, 0x01, 0x74, 0x1e, 0x81, 0xff, 0x10
);
DEFINE_GUID(
   FWPM_CALLOUT_IPSEC_INBOUND_TRANSPORT_V6,
   0x49d3ac92,
   0x2a6c,
   0x4dcf,
   0x95, 0x5f, 0x1c, 0x3b, 0xe0, 0x09, 0xdd, 0x99
);
DEFINE_GUID(
   FWPM_CALLOUT_IPSEC_OUTBOUND_TRANSPORT_V4,
   0x4b46bf0a,
   0x4523,
   0x4e57,
   0xaa, 0x38, 0xa8, 0x79, 0x87, 0xc9, 0x10, 0xd9
);
DEFINE_GUID(
   FWPM_CALLOUT_IPSEC_OUTBOUND_TRANSPORT_V6,
   0x38d87722,
   0xad83,
   0x4f11,
   0xa9, 0x1f, 0xdf, 0x0f, 0xb0, 0x77, 0x22, 0x5b
);
DEFINE_GUID(
   FWPM_CALLOUT_IPSEC_INBOUND_TUNNEL_V4,
   0x191a8a46,
   0x0bf8,
   0x46cf,
   0xb0, 0x45, 0x4b, 0x45, 0xdf, 0xa6, 0xa3, 0x24
);
DEFINE_GUID(
   FWPM_CALLOUT_IPSEC_INBOUND_TUNNEL_V6,
   0x80c342e3,
   0x1e53,
   0x4d6f,
   0x9b, 0x44, 0x03, 0xdf, 0x5a, 0xee, 0xe1, 0x54
);
DEFINE_GUID(
   FWPM_CALLOUT_IPSEC_OUTBOUND_TUNNEL_V4,
   0x70a4196c,
   0x835b,
   0x4fb0,
   0x98, 0xe8, 0x07, 0x5f, 0x4d, 0x97, 0x7d, 0x46
);
DEFINE_GUID(
   FWPM_CALLOUT_IPSEC_OUTBOUND_TUNNEL_V6,
   0xf1835363,
   0xa6a5,
   0x4e62,
   0xb1, 0x80, 0x23, 0xdb, 0x78, 0x9d, 0x8d, 0xa6
);
DEFINE_GUID(
   FWPM_CALLOUT_IPSEC_FORWARD_INBOUND_TUNNEL_V4,
   0x28829633,
   0xc4f0,
   0x4e66,
   0x87, 0x3f, 0x84, 0x4d, 0xb2, 0xa8, 0x99, 0xc7
);
DEFINE_GUID(
   FWPM_CALLOUT_IPSEC_FORWARD_INBOUND_TUNNEL_V6,
   0xaf50bec2,
   0xc686,
   0x429a,
   0x88, 0x4d, 0xb7, 0x44, 0x43, 0xe7, 0xb0, 0xb4
);
DEFINE_GUID(
   FWPM_CALLOUT_IPSEC_FORWARD_OUTBOUND_TUNNEL_V4,
   0xfb532136,
   0x15cb,
   0x440b,
   0x93, 0x7c, 0x17, 0x17, 0xca, 0x32, 0x0c, 0x40
);
DEFINE_GUID(
   FWPM_CALLOUT_IPSEC_FORWARD_OUTBOUND_TUNNEL_V6,
   0xdae640cc,
   0xe021,
   0x4bee,
   0x9e, 0xb6, 0xa4, 0x8b, 0x27, 0x5c, 0x8c, 0x1d
);
DEFINE_GUID(
   FWPM_CALLOUT_IPSEC_INBOUND_INITIATE_SECURE_V4,
   0x7dff309b,
   0xba7d,
   0x4aba,
   0x91, 0xaa, 0xae, 0x5c, 0x66, 0x40, 0xc9, 0x44
);
DEFINE_GUID(
   FWPM_CALLOUT_IPSEC_INBOUND_INITIATE_SECURE_V6,
   0xa9a0d6d9,
   0xc58c,
   0x474e,
   0x8a, 0xeb, 0x3c, 0xfe, 0x99, 0xd6, 0xd5, 0x3d
);
DEFINE_GUID(
   FWPM_CALLOUT_IPSEC_INBOUND_TUNNEL_ALE_ACCEPT_V4,
   0x3df6e7de,
   0xfd20,
   0x48f2,
   0x9f, 0x26, 0xf8, 0x54, 0x44, 0x4c, 0xba, 0x79
);
DEFINE_GUID(
   FWPM_CALLOUT_IPSEC_INBOUND_TUNNEL_ALE_ACCEPT_V6,
   0xa1e392d3,
   0x72ac,
   0x47bb,
   0x87, 0xa7, 0x01, 0x22, 0xc6, 0x94, 0x34, 0xab
);
DEFINE_GUID(
   FWPM_CALLOUT_IPSEC_ALE_CONNECT_V4,
   0x6ac141fc,
   0xf75d,
   0x4203,
   0xb9,0xc8,0x48, 0xe6, 0x14, 0x9c, 0x27, 0x12
);
DEFINE_GUID(
   FWPM_CALLOUT_IPSEC_ALE_CONNECT_V6,
   0x4c0dda05,
   0xe31f,
   0x4666,
   0x90, 0xb0, 0xb3, 0xdf, 0xad, 0x34, 0x12, 0x9a
);
DEFINE_GUID(
   FWPM_CALLOUT_IPSEC_DOSP_FORWARD_V6,
   0x6d08a342,
   0xdb9e,
   0x4fbe,
   0x9e, 0xd2, 0x57, 0x37, 0x4c, 0xe8, 0x9f, 0x79
);
DEFINE_GUID(
   FWPM_CALLOUT_IPSEC_DOSP_FORWARD_V4,
   0x2fcb56ec,
   0xcd37,
   0x4b4f,
   0xb1, 0x08, 0x62, 0xc2, 0xb1, 0x85, 0x0a, 0x0c
);
DEFINE_GUID(
   FWPM_CALLOUT_WFP_TRANSPORT_LAYER_V4_SILENT_DROP,
   0xeda08606,
   0x2494,
   0x4d78,
   0x89, 0xbc, 0x67, 0x83, 0x7c, 0x03, 0xb9, 0x69
);
DEFINE_GUID(
   FWPM_CALLOUT_WFP_TRANSPORT_LAYER_V6_SILENT_DROP,
   0x8693cc74,
   0xa075,
   0x4156,
   0xb4, 0x76, 0x92, 0x86, 0xee, 0xce, 0x81, 0x4e
);
DEFINE_GUID(
   FWPM_CALLOUT_TCP_CHIMNEY_CONNECT_LAYER_V4,
   0xf3e10ab3,
   0x2c25,
   0x4279,
   0xac, 0x36, 0xc3, 0x0f, 0xc1, 0x81, 0xbe, 0xc4
);
DEFINE_GUID(
   FWPM_CALLOUT_TCP_CHIMNEY_CONNECT_LAYER_V6,
   0x39e22085,
   0xa341,
   0x42fc,
   0xa2, 0x79, 0xae, 0xc9, 0x4e, 0x68, 0x9c, 0x56
);
DEFINE_GUID(
   FWPM_CALLOUT_TCP_CHIMNEY_ACCEPT_LAYER_V4,
   0xe183ecb2,
   0x3a7f,
   0x4b54,
   0x8a, 0xd9, 0x76, 0x05, 0x0e, 0xd8, 0x80, 0xca
);
DEFINE_GUID(
   FWPM_CALLOUT_TCP_CHIMNEY_ACCEPT_LAYER_V6,
   0x0378cf41,
   0xbf98,
   0x4603,
   0x81, 0xf2, 0x7f, 0x12, 0x58, 0x60, 0x79, 0xf6
);
DEFINE_GUID(
   FWPM_CALLOUT_SET_OPTIONS_AUTH_CONNECT_LAYER_V4,
   0xbc582280,
   0x1677,
   0x41e9,
   0x94, 0xab, 0xc2, 0xfc, 0xb1, 0x5c, 0x2e, 0xeb
);
DEFINE_GUID(
   FWPM_CALLOUT_SET_OPTIONS_AUTH_CONNECT_LAYER_V6,
   0x98e5373c,
   0xb884,
   0x490f,
   0xb6, 0x5f, 0x2f, 0x6a, 0x4a, 0x57, 0x51, 0x95
);
DEFINE_GUID(
   FWPM_CALLOUT_SET_OPTIONS_AUTH_RECV_ACCEPT_LAYER_V4,
   0x2d55f008,
   0x0c01,
   0x4f92,
   0xb2, 0x6e, 0xa0, 0x8a, 0x94, 0x56, 0x9b, 0x8d
);
DEFINE_GUID(
   FWPM_CALLOUT_SET_OPTIONS_AUTH_RECV_ACCEPT_LAYER_V6,
   0x63018537,
   0xf281,
   0x4dc4,
   0x83, 0xd3, 0x8d, 0xec, 0x18, 0xb7, 0xad, 0xe2
);
DEFINE_GUID(
   FWPM_CALLOUT_RESERVED_AUTH_CONNECT_LAYER_V4,
   0x288b524d,
   0x566,
   0x4e19,
   0xb6, 0x12, 0x8f, 0x44, 0x1a, 0x2e, 0x59, 0x49
);
DEFINE_GUID(
   FWPM_CALLOUT_RESERVED_AUTH_CONNECT_LAYER_V6,
   0xb84b92,
   0x2b5e,
   0x4b71,
   0xab, 0xe, 0xaa, 0xca, 0x43, 0xe3, 0x87, 0xe6
);
DEFINE_GUID(
   FWPM_CALLOUT_TEREDO_ALE_RESOURCE_ASSIGNMENT_V6,
   0x31b95392,
   0x066e,
   0x42a2,
   0xb7, 0xdb, 0x92, 0xf8, 0xac, 0xdd, 0x56, 0xf9
);
    FWPM_CALLOUT_TEREDO_ALE_RESOURCE_ASSIGNMENT_V6
DEFINE_GUID(
    FWPM_CALLOUT_EDGE_TRAVERSAL_ALE_RESOURCE_ASSIGNMENT_V4,
    0x079b1010,
    0xf1c5,
    0x4fcd,
    0xae, 0x05, 0xda, 0x41, 0x10, 0x7a, 0xbd, 0x0b
);
DEFINE_GUID(
   FWPM_CALLOUT_TEREDO_ALE_LISTEN_V6,
   0x81a434e7,
   0xf60c,
   0x4378,
   0xba, 0xb8, 0xc6, 0x25, 0xa3, 0x0f, 0x01, 0x97
);
    FWPM_CALLOUT_TEREDO_ALE_LISTEN_V6
DEFINE_GUID(
    FWPM_CALLOUT_EDGE_TRAVERSAL_ALE_LISTEN_V4,
    0x33486ab5,
    0x6d5e,
    0x4e65,
    0xa0, 0x0b, 0xa7, 0xaf, 0xed, 0x0b, 0xa9, 0xa1
);
DEFINE_GUID(
   FWPM_CALLOUT_TCP_TEMPLATES_CONNECT_LAYER_V4,
   0x215a0b39,
   0x4b7e,
   0x4eda,
   0x8c, 0xe4, 0x17, 0x96, 0x79, 0xdf, 0x62, 0x24
);
DEFINE_GUID(
   FWPM_CALLOUT_TCP_TEMPLATES_CONNECT_LAYER_V6,
   0x838b37a1,
   0x5c12,
   0x4d34,
   0x8b, 0x38, 0x07, 0x87, 0x28, 0xb2, 0xd2, 0x5c
);
DEFINE_GUID(
   FWPM_CALLOUT_TCP_TEMPLATES_ACCEPT_LAYER_V4,
   0x2f23f5d0,
   0x40c4,
   0x4c41,
   0xa2, 0x54, 0x46, 0xd8, 0xdb, 0xa8, 0x95, 0x7c
);
DEFINE_GUID(
   FWPM_CALLOUT_TCP_TEMPLATES_ACCEPT_LAYER_V6,
   0xb25152f0,
   0x991c,
   0x4f53,
   0xbb, 0xe7, 0xd2, 0x4b, 0x45, 0xfe, 0x63, 0x2c
);
DEFINE_GUID(
    FWPM_CALLOUT_POLICY_SILENT_MODE_AUTH_CONNECT_LAYER_V4,
    0x5fbfc31d,
    0xa51c,
    0x44dc,
    0xac, 0xb6, 0x6, 0x24, 0xa0, 0x30, 0xa7, 0x00
);
DEFINE_GUID(
    FWPM_CALLOUT_POLICY_SILENT_MODE_AUTH_CONNECT_LAYER_V6,
    0x5fbfc31d,
    0xa51c,
    0x44dc,
    0xac, 0xb6, 0x6, 0x24, 0xa0, 0x30, 0xa7, 0x01
);
DEFINE_GUID(
    FWPM_CALLOUT_POLICY_SILENT_MODE_AUTH_RECV_ACCEPT_LAYER_V4,
    0x5fbfc31d,
    0xa51c,
    0x44dc,
    0xac, 0xb6, 0x6, 0x24, 0xa0, 0x30, 0xa7, 0x02
);
DEFINE_GUID(
    FWPM_CALLOUT_POLICY_SILENT_MODE_AUTH_RECV_ACCEPT_LAYER_V6,
    0x5fbfc31d,
    0xa51c,
    0x44dc,
    0xac, 0xb6, 0x6, 0x24, 0xa0, 0x30, 0xa7, 0x03
);
DEFINE_GUID(
    FWPM_CALLOUT_HTTP_TEMPLATE_SSL_HANDSHAKE,
    0xb3423249,
    0x8d09,
    0x4858,
    0x92, 0x10, 0x95, 0xc7, 0xfd, 0xa8, 0xe3, 0x0f
    );
DEFINE_GUID(
   FWPM_PROVIDER_CONTEXT_SECURE_SOCKET_AUTHIP,
   0xb25ea800,
   0x0d02,
   0x46ed,
   0x92, 0xbd, 0x7f, 0xa8, 0x4b, 0xb7, 0x3e, 0x9d
);
DEFINE_GUID(
   FWPM_PROVIDER_CONTEXT_SECURE_SOCKET_IPSEC,
   0x8c2d4144,
   0xf8e0,
   0x42c0,
   0x94, 0xce, 0x7c, 0xcf, 0xc6, 0x3b, 0x2f, 0x9b
);
DEFINE_GUID(
   FWPM_KEYING_MODULE_IKE,
   0xa9bbf787,
   0x82a8,
   0x45bb,
   0xa4, 0x00, 0x5d, 0x7e, 0x59, 0x52, 0xc7, 0xa9
);
DEFINE_GUID(
   FWPM_KEYING_MODULE_AUTHIP,
   0x11e3dae0,
   0xdd26,
   0x4590,
   0x85, 0x7d, 0xab, 0x4b, 0x28, 0xd1, 0xa0, 0x95
);
DEFINE_GUID(
   FWPM_KEYING_MODULE_IKEV2,
   0x041792cc,
   0x8f07,
   0x419d,
   0xa3, 0x94, 0x71, 0x69, 0x68, 0xcb, 0x16, 0x47
);
#include "fwpmtypes.h"
#include "fwpvi.h"
extern "C" {
static const IPSEC_AUTH_TRANSFORM_ID0 IPSEC_AUTH_TRANSFORM_ID_HMAC_MD5_96 =
{
   IPSEC_AUTH_MD5,
   IPSEC_AUTH_CONFIG_HMAC_MD5_96
};
static const IPSEC_AUTH_TRANSFORM_ID0 IPSEC_AUTH_TRANSFORM_ID_HMAC_SHA_1_96 =
{
   IPSEC_AUTH_SHA_1,
   IPSEC_AUTH_CONFIG_HMAC_SHA_1_96
};
static const IPSEC_AUTH_TRANSFORM_ID0 IPSEC_AUTH_TRANSFORM_ID_HMAC_SHA_256_128 =
{
   IPSEC_AUTH_SHA_256,
   IPSEC_AUTH_CONFIG_HMAC_SHA_256_128
};
static const IPSEC_AUTH_TRANSFORM_ID0 IPSEC_AUTH_TRANSFORM_ID_GCM_AES_128 =
{
   IPSEC_AUTH_AES_128,
   IPSEC_AUTH_CONFIG_GCM_AES_128
};
static const IPSEC_AUTH_TRANSFORM_ID0 IPSEC_AUTH_TRANSFORM_ID_GCM_AES_192 =
{
   IPSEC_AUTH_AES_192,
   IPSEC_AUTH_CONFIG_GCM_AES_192
};
static const IPSEC_AUTH_TRANSFORM_ID0 IPSEC_AUTH_TRANSFORM_ID_GCM_AES_256 =
{
   IPSEC_AUTH_AES_256,
   IPSEC_AUTH_CONFIG_GCM_AES_256
};
static const IPSEC_CIPHER_TRANSFORM_ID0 IPSEC_CIPHER_TRANSFORM_ID_CBC_DES =
{
   IPSEC_CIPHER_TYPE_DES,
   IPSEC_CIPHER_CONFIG_CBC_DES
};
static const IPSEC_CIPHER_TRANSFORM_ID0 IPSEC_CIPHER_TRANSFORM_ID_CBC_3DES =
{
   IPSEC_CIPHER_TYPE_3DES,
   IPSEC_CIPHER_CONFIG_CBC_3DES
};
static const IPSEC_CIPHER_TRANSFORM_ID0 IPSEC_CIPHER_TRANSFORM_ID_AES_128 =
{
   IPSEC_CIPHER_TYPE_AES_128,
   IPSEC_CIPHER_CONFIG_CBC_AES_128
};
static const IPSEC_CIPHER_TRANSFORM_ID0 IPSEC_CIPHER_TRANSFORM_ID_AES_192 =
{
   IPSEC_CIPHER_TYPE_AES_192,
   IPSEC_CIPHER_CONFIG_CBC_AES_192
};
static const IPSEC_CIPHER_TRANSFORM_ID0 IPSEC_CIPHER_TRANSFORM_ID_AES_256 =
{
   IPSEC_CIPHER_TYPE_AES_256,
   IPSEC_CIPHER_CONFIG_CBC_AES_256
};
static const IPSEC_CIPHER_TRANSFORM_ID0 IPSEC_CIPHER_TRANSFORM_ID_GCM_AES_128 =
{
   IPSEC_CIPHER_TYPE_AES_128,
   IPSEC_CIPHER_CONFIG_GCM_AES_128
};
static const IPSEC_CIPHER_TRANSFORM_ID0 IPSEC_CIPHER_TRANSFORM_ID_GCM_AES_192 =
{
   IPSEC_CIPHER_TYPE_AES_192,
   IPSEC_CIPHER_CONFIG_GCM_AES_192
};
static const IPSEC_CIPHER_TRANSFORM_ID0 IPSEC_CIPHER_TRANSFORM_ID_GCM_AES_256 =
{
   IPSEC_CIPHER_TYPE_AES_256,
   IPSEC_CIPHER_CONFIG_GCM_AES_256
};
      ( STANDARD_RIGHTS_READ | \
        FWPM_ACTRL_BEGIN_READ_TXN | \
        FWPM_ACTRL_CLASSIFY | \
        FWPM_ACTRL_OPEN | \
        FWPM_ACTRL_READ | \
        FWPM_ACTRL_READ_STATS )
      ( STANDARD_RIGHTS_EXECUTE | \
        FWPM_ACTRL_ENUM | \
        FWPM_ACTRL_SUBSCRIBE )
      ( STANDARD_RIGHTS_WRITE | \
        DELETE | \
        FWPM_ACTRL_ADD | \
        FWPM_ACTRL_ADD_LINK | \
        FWPM_ACTRL_BEGIN_WRITE_TXN | \
        FWPM_ACTRL_WRITE )
      ( STANDARD_RIGHTS_REQUIRED | \
        FWPM_ACTRL_ADD | \
        FWPM_ACTRL_ADD_LINK | \
        FWPM_ACTRL_BEGIN_READ_TXN | \
        FWPM_ACTRL_BEGIN_WRITE_TXN | \
        FWPM_ACTRL_CLASSIFY | \
        FWPM_ACTRL_ENUM | \
        FWPM_ACTRL_OPEN | \
        FWPM_ACTRL_READ | \
        FWPM_ACTRL_READ_STATS | \
        FWPM_ACTRL_SUBSCRIBE | \
        FWPM_ACTRL_WRITE )
void NTAPI FwpmFreeMemory0(_Inout_ void** p);
typedef void (CALLBACK *FWPM_SERVICE_STATE_CHANGE_CALLBACK0)(
                           _Inout_ void* context,
                           _In_ FWPM_SERVICE_STATE newState
                           );
FWPM_SERVICE_STATE NTAPI FwpmBfeStateGet0(void);
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmBfeStateSubscribeChanges0(
   _Inout_ void* deviceObject,
   _In_ FWPM_SERVICE_STATE_CHANGE_CALLBACK0 callback,
   _In_opt_ void* context,
   _Out_ HANDLE* changeHandle
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmBfeStateUnsubscribeChanges0(
   _Inout_ HANDLE changeHandle
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmEngineOpen0(
   _In_opt_ const wchar_t* serverName,
   _In_ UINT32 authnService,
   _In_opt_ SEC_WINNT_AUTH_IDENTITY_W* authIdentity,
   _In_opt_ const FWPM_SESSION0* session,
   _Out_ HANDLE* engineHandle
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmEngineClose0(_Inout_ HANDLE engineHandle);
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmEngineGetOption0(
   _In_ HANDLE engineHandle,
   _In_ FWPM_ENGINE_OPTION option,
   _Outptr_ FWP_VALUE0** value
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmEngineSetOption0(
   _In_ HANDLE engineHandle,
   _In_ FWPM_ENGINE_OPTION option,
   _In_ const FWP_VALUE0* newValue
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmEngineGetSecurityInfo0(
   _In_ HANDLE engineHandle,
   _In_ SECURITY_INFORMATION securityInfo,
   _Outptr_result_maybenull_ PSID* sidOwner,
   _Outptr_result_maybenull_ PSID* sidGroup,
   _Outptr_result_maybenull_ PACL* dacl,
   _Outptr_result_maybenull_ PACL* sacl,
   _Outptr_ PSECURITY_DESCRIPTOR* securityDescriptor
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmEngineSetSecurityInfo0(
   _In_ HANDLE engineHandle,
   _In_ SECURITY_INFORMATION securityInfo,
   _In_opt_ const SID* sidOwner,
   _In_opt_ const SID* sidGroup,
   _In_opt_ const ACL* dacl,
   _In_opt_ const ACL* sacl
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmSessionCreateEnumHandle0(
   _In_ HANDLE engineHandle,
   _In_opt_ const FWPM_SESSION_ENUM_TEMPLATE0* enumTemplate,
   _Out_ HANDLE* enumHandle
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmSessionEnum0(
   _In_ HANDLE engineHandle,
   _In_ HANDLE enumHandle,
   _In_ UINT32 numEntriesRequested,
   _Outptr_result_buffer_(*numEntriesReturned) FWPM_SESSION0*** entries,
   _Out_ UINT32* numEntriesReturned
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmSessionDestroyEnumHandle0(
   _In_ HANDLE engineHandle,
   _Inout_ HANDLE enumHandle
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmTransactionBegin0(
   _In_ _Acquires_lock_(_Curr_)HANDLE engineHandle,
   _In_ UINT32 flags
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmTransactionCommit0(_In_ _Releases_lock_(_Curr_)HANDLE engineHandle);
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmTransactionAbort0(_In_ _Releases_lock_(_Curr_)HANDLE engineHandle);
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmProviderAdd0(
   _In_ HANDLE engineHandle,
   _In_ const FWPM_PROVIDER0* provider,
   _In_opt_ PSECURITY_DESCRIPTOR sd
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmProviderDeleteByKey0(
   _In_ HANDLE engineHandle,
   _In_ const GUID* key
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmProviderGetByKey0(
   _In_ HANDLE engineHandle,
   _In_ const GUID* key,
   _Outptr_ FWPM_PROVIDER0** provider
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmProviderCreateEnumHandle0(
   _In_ HANDLE engineHandle,
   _In_opt_ const FWPM_PROVIDER_ENUM_TEMPLATE0* enumTemplate,
   _Out_ HANDLE* enumHandle
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmProviderEnum0(
   _In_ HANDLE engineHandle,
   _In_ HANDLE enumHandle,
   _In_ UINT32 numEntriesRequested,
   _Outptr_result_buffer_(*numEntriesReturned) FWPM_PROVIDER0*** entries,
   _Out_ UINT32* numEntriesReturned
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmProviderDestroyEnumHandle0(
   _In_ HANDLE engineHandle,
   _Inout_ HANDLE enumHandle
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmProviderGetSecurityInfoByKey0(
   _In_ HANDLE engineHandle,
   _In_opt_ const GUID* key,
   _In_ SECURITY_INFORMATION securityInfo,
   _Outptr_result_maybenull_ PSID* sidOwner,
   _Outptr_result_maybenull_ PSID* sidGroup,
   _Outptr_result_maybenull_ PACL* dacl,
   _Outptr_result_maybenull_ PACL* sacl,
   _Outptr_ PSECURITY_DESCRIPTOR* securityDescriptor
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmProviderSetSecurityInfoByKey0(
   _In_ HANDLE engineHandle,
   _In_opt_ const GUID* key,
   _In_ SECURITY_INFORMATION securityInfo,
   _In_opt_ const SID* sidOwner,
   _In_opt_ const SID* sidGroup,
   _In_opt_ const ACL* dacl,
   _In_opt_ const ACL* sacl
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmProviderContextAdd0(
   _In_ HANDLE engineHandle,
   _In_ const FWPM_PROVIDER_CONTEXT0* providerContext,
   _In_opt_ PSECURITY_DESCRIPTOR sd,
   _Out_opt_ UINT64* id
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmProviderContextAdd1(
   _In_ HANDLE engineHandle,
   _In_ const FWPM_PROVIDER_CONTEXT1* providerContext,
   _In_opt_ PSECURITY_DESCRIPTOR sd,
   _Out_opt_ UINT64* id
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmProviderContextAdd2(
   _In_ HANDLE engineHandle,
   _In_ const FWPM_PROVIDER_CONTEXT2* providerContext,
   _In_opt_ PSECURITY_DESCRIPTOR sd,
   _Out_opt_ UINT64* id
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmProviderContextAdd3(
   _In_ HANDLE engineHandle,
   _In_ const FWPM_PROVIDER_CONTEXT3* providerContext,
   _In_opt_ PSECURITY_DESCRIPTOR sd,
   _Out_opt_ UINT64* id
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmProviderContextDeleteById0(
   _In_ HANDLE engineHandle,
   _In_ UINT64 id
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmProviderContextDeleteByKey0(
   _In_ HANDLE engineHandle,
   _In_ const GUID* key
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmProviderContextGetById0(
   _In_ HANDLE engineHandle,
   _In_ UINT64 id,
   _Outptr_ FWPM_PROVIDER_CONTEXT0** providerContext
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmProviderContextGetById1(
   _In_ HANDLE engineHandle,
   _In_ UINT64 id,
   _Outptr_ FWPM_PROVIDER_CONTEXT1** providerContext
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmProviderContextGetById2(
   _In_ HANDLE engineHandle,
   _In_ UINT64 id,
   _Outptr_ FWPM_PROVIDER_CONTEXT2** providerContext
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmProviderContextGetById3(
   _In_ HANDLE engineHandle,
   _In_ UINT64 id,
   _Outptr_ FWPM_PROVIDER_CONTEXT3** providerContext
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmProviderContextGetByKey0(
   _In_ HANDLE engineHandle,
   _In_ const GUID* key,
   _Outptr_ FWPM_PROVIDER_CONTEXT0** providerContext
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmProviderContextGetByKey1(
   _In_ HANDLE engineHandle,
   _In_ const GUID* key,
   _Outptr_ FWPM_PROVIDER_CONTEXT1** providerContext
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmProviderContextGetByKey2(
   _In_ HANDLE engineHandle,
   _In_ const GUID* key,
   _Outptr_ FWPM_PROVIDER_CONTEXT2** providerContext
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmProviderContextGetByKey3(
   _In_ HANDLE engineHandle,
   _In_ const GUID* key,
   _Outptr_ FWPM_PROVIDER_CONTEXT3** providerContext
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmProviderContextCreateEnumHandle0(
   _In_ HANDLE engineHandle,
   _In_opt_ const FWPM_PROVIDER_CONTEXT_ENUM_TEMPLATE0* enumTemplate,
   _Out_ HANDLE* enumHandle
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmProviderContextEnum0(
   _In_ HANDLE engineHandle,
   _In_ HANDLE enumHandle,
   _In_ UINT32 numEntriesRequested,
   _Outptr_result_buffer_(*numEntriesReturned)
      FWPM_PROVIDER_CONTEXT0*** entries,
   _Out_ UINT32* numEntriesReturned
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmProviderContextEnum1(
   _In_ HANDLE engineHandle,
   _In_ HANDLE enumHandle,
   _In_ UINT32 numEntriesRequested,
   _Outptr_result_buffer_(*numEntriesReturned)
      FWPM_PROVIDER_CONTEXT1*** entries,
   _Out_ UINT32* numEntriesReturned
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmProviderContextEnum2(
   _In_ HANDLE engineHandle,
   _In_ HANDLE enumHandle,
   _In_ UINT32 numEntriesRequested,
   _Outptr_result_buffer_(*numEntriesReturned)
      FWPM_PROVIDER_CONTEXT2*** entries,
   _Out_ UINT32* numEntriesReturned
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmProviderContextEnum3(
   _In_ HANDLE engineHandle,
   _In_ HANDLE enumHandle,
   _In_ UINT32 numEntriesRequested,
   _Outptr_result_buffer_(*numEntriesReturned)
      FWPM_PROVIDER_CONTEXT3*** entries,
   _Out_ UINT32* numEntriesReturned
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmProviderContextDestroyEnumHandle0(
   _In_ HANDLE engineHandle,
   _Inout_ HANDLE enumHandle
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmProviderContextGetSecurityInfoByKey0(
   _In_ HANDLE engineHandle,
   _In_opt_ const GUID* key,
   _In_ SECURITY_INFORMATION securityInfo,
   _Outptr_result_maybenull_ PSID* sidOwner,
   _Outptr_result_maybenull_ PSID* sidGroup,
   _Outptr_result_maybenull_ PACL* dacl,
   _Outptr_result_maybenull_ PACL* sacl,
   _Outptr_ PSECURITY_DESCRIPTOR* securityDescriptor
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmProviderContextSetSecurityInfoByKey0(
   _In_ HANDLE engineHandle,
   _In_opt_ const GUID* key,
   _In_ SECURITY_INFORMATION securityInfo,
   _In_opt_ const SID* sidOwner,
   _In_opt_ const SID* sidGroup,
   _In_opt_ const ACL* dacl,
   _In_opt_ const ACL* sacl
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmSubLayerAdd0(
   _In_ HANDLE engineHandle,
   _In_ const FWPM_SUBLAYER0* subLayer,
   _In_opt_ PSECURITY_DESCRIPTOR sd
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmSubLayerDeleteByKey0(
   _In_ HANDLE engineHandle,
   _In_ const GUID* key
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmSubLayerGetByKey0(
   _In_ HANDLE engineHandle,
   _In_ const GUID* key,
   _Outptr_ FWPM_SUBLAYER0** subLayer
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmSubLayerCreateEnumHandle0(
   _In_ HANDLE engineHandle,
   _In_opt_ const FWPM_SUBLAYER_ENUM_TEMPLATE0* enumTemplate,
   _Out_ HANDLE* enumHandle
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmSubLayerEnum0(
   _In_ HANDLE engineHandle,
   _In_ HANDLE enumHandle,
   _In_ UINT32 numEntriesRequested,
   _Outptr_result_buffer_(*numEntriesReturned) FWPM_SUBLAYER0*** entries,
   _Out_ UINT32* numEntriesReturned
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmSubLayerDestroyEnumHandle0(
   _In_ HANDLE engineHandle,
   _Inout_ HANDLE enumHandle
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmSubLayerGetSecurityInfoByKey0(
   _In_ HANDLE engineHandle,
   _In_opt_ const GUID* key,
   _In_ SECURITY_INFORMATION securityInfo,
   _Outptr_result_maybenull_ PSID* sidOwner,
   _Outptr_result_maybenull_ PSID* sidGroup,
   _Outptr_result_maybenull_ PACL* dacl,
   _Outptr_result_maybenull_ PACL* sacl,
   _Outptr_ PSECURITY_DESCRIPTOR* securityDescriptor
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmSubLayerSetSecurityInfoByKey0(
   _In_ HANDLE engineHandle,
   _In_opt_ const GUID* key,
   _In_ SECURITY_INFORMATION securityInfo,
   _In_opt_ const SID* sidOwner,
   _In_opt_ const SID* sidGroup,
   _In_opt_ const ACL* dacl,
   _In_opt_ const ACL* sacl
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmLayerGetById0(
   _In_ HANDLE engineHandle,
   _In_ UINT16 id,
   _Outptr_ FWPM_LAYER0** layer
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmLayerGetByKey0(
   _In_ HANDLE engineHandle,
   _In_ const GUID* key,
   _Outptr_ FWPM_LAYER0** layer
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmLayerCreateEnumHandle0(
   _In_ HANDLE engineHandle,
   _In_opt_ const FWPM_LAYER_ENUM_TEMPLATE0* enumTemplate,
   _Out_ HANDLE* enumHandle
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmLayerEnum0(
   _In_ HANDLE engineHandle,
   _In_ HANDLE enumHandle,
   _In_ UINT32 numEntriesRequested,
   _Outptr_result_buffer_(*numEntriesReturned) FWPM_LAYER0*** entries,
   _Out_ UINT32* numEntriesReturned
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmLayerDestroyEnumHandle0(
   _In_ HANDLE engineHandle,
   _Inout_ HANDLE enumHandle
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmLayerGetSecurityInfoByKey0(
   _In_ HANDLE engineHandle,
   _In_opt_ const GUID* key,
   _In_ SECURITY_INFORMATION securityInfo,
   _Outptr_result_maybenull_ PSID* sidOwner,
   _Outptr_result_maybenull_ PSID* sidGroup,
   _Outptr_result_maybenull_ PACL* dacl,
   _Outptr_result_maybenull_ PACL* sacl,
   _Outptr_ PSECURITY_DESCRIPTOR* securityDescriptor
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmLayerSetSecurityInfoByKey0(
   _In_ HANDLE engineHandle,
   _In_opt_ const GUID* key,
   _In_ SECURITY_INFORMATION securityInfo,
   _In_opt_ const SID* sidOwner,
   _In_opt_ const SID* sidGroup,
   _In_opt_ const ACL* dacl,
   _In_opt_ const ACL* sacl
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmCalloutAdd0(
   _In_ HANDLE engineHandle,
   _In_ const FWPM_CALLOUT0* callout,
   _In_opt_ PSECURITY_DESCRIPTOR sd,
   _Out_opt_ UINT32* id
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmCalloutDeleteById0(
   _In_ HANDLE engineHandle,
   _In_ UINT32 id
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmCalloutDeleteByKey0(
   _In_ HANDLE engineHandle,
   _In_ const GUID* key
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmCalloutGetById0(
   _In_ HANDLE engineHandle,
   _In_ UINT32 id,
   _Outptr_ FWPM_CALLOUT0** callout
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmCalloutGetByKey0(
   _In_ HANDLE engineHandle,
   _In_ const GUID* key,
   _Outptr_ FWPM_CALLOUT0** callout
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmCalloutCreateEnumHandle0(
   _In_ HANDLE engineHandle,
   _In_opt_ const FWPM_CALLOUT_ENUM_TEMPLATE0* enumTemplate,
   _Out_ HANDLE* enumHandle
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmCalloutEnum0(
   _In_ HANDLE engineHandle,
   _In_ HANDLE enumHandle,
   _In_ UINT32 numEntriesRequested,
   _Outptr_result_buffer_(*numEntriesReturned) FWPM_CALLOUT0*** entries,
   _Out_ UINT32* numEntriesReturned
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmCalloutDestroyEnumHandle0(
   _In_ HANDLE engineHandle,
   _Inout_ HANDLE enumHandle
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmCalloutGetSecurityInfoByKey0(
   _In_ HANDLE engineHandle,
   _In_opt_ const GUID* key,
   _In_ SECURITY_INFORMATION securityInfo,
   _Outptr_result_maybenull_ PSID* sidOwner,
   _Outptr_result_maybenull_ PSID* sidGroup,
   _Outptr_result_maybenull_ PACL* dacl,
   _Outptr_result_maybenull_ PACL* sacl,
   _Outptr_ PSECURITY_DESCRIPTOR* securityDescriptor
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmCalloutSetSecurityInfoByKey0(
   _In_ HANDLE engineHandle,
   _In_opt_ const GUID* key,
   _In_ SECURITY_INFORMATION securityInfo,
   _In_opt_ const SID* sidOwner,
   _In_opt_ const SID* sidGroup,
   _In_opt_ const ACL* dacl,
   _In_opt_ const ACL* sacl
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmFilterAdd0(
   _In_ HANDLE engineHandle,
   _In_ const FWPM_FILTER0* filter,
   _In_opt_ PSECURITY_DESCRIPTOR sd,
   _Out_opt_ UINT64* id
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmFilterDeleteById0(
   _In_ HANDLE engineHandle,
   _In_ UINT64 id
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmFilterDeleteByKey0(
   _In_ HANDLE engineHandle,
   _In_ const GUID* key
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmFilterGetById0(
   _In_ HANDLE engineHandle,
   _In_ UINT64 id,
   _Outptr_ FWPM_FILTER0** filter
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmFilterGetByKey0(
   _In_ HANDLE engineHandle,
   _In_ const GUID* key,
   _Outptr_ FWPM_FILTER0** filter
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmFilterCreateEnumHandle0(
   _In_ HANDLE engineHandle,
   _In_opt_ const FWPM_FILTER_ENUM_TEMPLATE0* enumTemplate,
   _Out_ HANDLE* enumHandle
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmFilterEnum0(
   _In_ HANDLE engineHandle,
   _In_ HANDLE enumHandle,
   _In_ UINT32 numEntriesRequested,
   _Outptr_result_buffer_(*numEntriesReturned) FWPM_FILTER0*** entries,
   _Out_ UINT32* numEntriesReturned
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmFilterDestroyEnumHandle0(
   _In_ HANDLE engineHandle,
   _Inout_ HANDLE enumHandle
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmFilterGetSecurityInfoByKey0(
   _In_ HANDLE engineHandle,
   _In_opt_ const GUID* key,
   _In_ SECURITY_INFORMATION securityInfo,
   _Outptr_result_maybenull_ PSID* sidOwner,
   _Outptr_result_maybenull_ PSID* sidGroup,
   _Outptr_result_maybenull_ PACL* dacl,
   _Outptr_result_maybenull_ PACL* sacl,
   _Outptr_ PSECURITY_DESCRIPTOR* securityDescriptor
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmFilterSetSecurityInfoByKey0(
   _In_ HANDLE engineHandle,
   _In_opt_ const GUID* key,
   _In_ SECURITY_INFORMATION securityInfo,
   _In_opt_ const SID* sidOwner,
   _In_opt_ const SID* sidGroup,
   _In_opt_ const ACL* dacl,
   _In_opt_ const ACL* sacl
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmBitmapIndexGet0(
   _In_ HANDLE engineHandle,
   _In_ const GUID* fieldId,
   _Out_ UINT8* idx
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmBitmapIndexFree0(
   _In_ HANDLE engineHandle,
   _In_ const GUID* fieldId,
   _In_ UINT8* idx
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmIPsecTunnelAdd0(
   _In_ HANDLE engineHandle,
   _In_ UINT32 flags,
   _In_opt_ const FWPM_PROVIDER_CONTEXT0* mainModePolicy,
   _In_ const FWPM_PROVIDER_CONTEXT0* tunnelPolicy,
   _In_ UINT32 numFilterConditions,
   _In_reads_(numFilterConditions)
      const FWPM_FILTER_CONDITION0* filterConditions,
   _In_opt_ PSECURITY_DESCRIPTOR sd
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmIPsecTunnelAdd1(
   _In_ HANDLE engineHandle,
   _In_ UINT32 flags,
   _In_opt_ const FWPM_PROVIDER_CONTEXT1* mainModePolicy,
   _In_ const FWPM_PROVIDER_CONTEXT1* tunnelPolicy,
   _In_ UINT32 numFilterConditions,
   _In_reads_(numFilterConditions)
      const FWPM_FILTER_CONDITION0* filterConditions,
   _In_opt_ const GUID* keyModKey,
   _In_opt_ PSECURITY_DESCRIPTOR sd
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmIPsecTunnelAdd2(
   _In_ HANDLE engineHandle,
   _In_ UINT32 flags,
   _In_opt_ const FWPM_PROVIDER_CONTEXT2* mainModePolicy,
   _In_ const FWPM_PROVIDER_CONTEXT2* tunnelPolicy,
   _In_ UINT32 numFilterConditions,
   _In_reads_(numFilterConditions)
      const FWPM_FILTER_CONDITION0* filterConditions,
   _In_opt_ const GUID* keyModKey,
   _In_opt_ PSECURITY_DESCRIPTOR sd
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmIPsecTunnelAdd3(
   _In_ HANDLE engineHandle,
   _In_ UINT32 flags,
   _In_opt_ const FWPM_PROVIDER_CONTEXT3* mainModePolicy,
   _In_ const FWPM_PROVIDER_CONTEXT3* tunnelPolicy,
   _In_ UINT32 numFilterConditions,
   _In_reads_(numFilterConditions)
      const FWPM_FILTER_CONDITION0* filterConditions,
   _In_opt_ const GUID* keyModKey,
   _In_opt_ PSECURITY_DESCRIPTOR sd
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmIPsecTunnelDeleteByKey0(
   _In_ HANDLE engineHandle,
   _In_ const GUID* key
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
IPsecGetStatistics0(
   _In_ HANDLE engineHandle,
   _Out_ IPSEC_STATISTICS0* ipsecStatistics
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
IPsecGetStatistics1(
   _In_ HANDLE engineHandle,
   _Out_ IPSEC_STATISTICS1* ipsecStatistics
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
IPsecSaContextCreate0(
   _In_ HANDLE engineHandle,
   _In_ const IPSEC_TRAFFIC0* outboundTraffic,
   _Out_opt_ UINT64* inboundFilterId,
   _Out_ UINT64* id
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
IPsecSaContextCreate1(
   _In_ HANDLE engineHandle,
   _In_ const IPSEC_TRAFFIC1* outboundTraffic,
   _In_opt_ const IPSEC_VIRTUAL_IF_TUNNEL_INFO0* virtualIfTunnelInfo,
   _Out_opt_ UINT64* inboundFilterId,
   _Out_ UINT64* id
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
IPsecSaContextDeleteById0(
   _In_ HANDLE engineHandle,
   _In_ UINT64 id
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
IPsecSaContextGetById0(
   _In_ HANDLE engineHandle,
   _In_ UINT64 id,
   _Outptr_ IPSEC_SA_CONTEXT0** saContext
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
IPsecSaContextGetById1(
   _In_ HANDLE engineHandle,
   _In_ UINT64 id,
   _Outptr_ IPSEC_SA_CONTEXT1** saContext
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
IPsecSaContextGetSpi0(
   _In_ HANDLE engineHandle,
   _In_ UINT64 id,
   _In_ const IPSEC_GETSPI0* getSpi,
   _Out_ IPSEC_SA_SPI* inboundSpi
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
IPsecSaContextGetSpi1(
   _In_ HANDLE engineHandle,
   _In_ UINT64 id,
   _In_ const IPSEC_GETSPI1* getSpi,
   _Out_ IPSEC_SA_SPI* inboundSpi
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
IPsecSaContextSetSpi0(
   _In_ HANDLE engineHandle,
   _In_ UINT64 id,
   _In_ const IPSEC_GETSPI1* getSpi,
   _In_ IPSEC_SA_SPI inboundSpi
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
IPsecSaContextAddInbound0(
   _In_ HANDLE engineHandle,
   _In_ UINT64 id,
   _In_ const IPSEC_SA_BUNDLE0* inboundBundle
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
IPsecSaContextAddOutbound0(
   _In_ HANDLE engineHandle,
   _In_ UINT64 id,
   _In_ const IPSEC_SA_BUNDLE0* outboundBundle
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
IPsecSaContextAddInbound1(
   _In_ HANDLE engineHandle,
   _In_ UINT64 id,
   _In_ const IPSEC_SA_BUNDLE1* inboundBundle
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
IPsecSaContextAddOutbound1(
   _In_ HANDLE engineHandle,
   _In_ UINT64 id,
   _In_ const IPSEC_SA_BUNDLE1* outboundBundle
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
IPsecSaContextExpire0(
   _In_ HANDLE engineHandle,
   _In_ UINT64 id
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
IPsecSaContextUpdate0(
   _In_ HANDLE engineHandle,
   _In_ UINT64 flags,
   _In_ const IPSEC_SA_CONTEXT1* newValues
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
IPsecSaContextCreateEnumHandle0(
   _In_ HANDLE engineHandle,
   _In_opt_ const IPSEC_SA_CONTEXT_ENUM_TEMPLATE0* enumTemplate,
   _Out_ HANDLE* enumHandle
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
IPsecSaContextEnum0(
   _In_ HANDLE engineHandle,
   _In_ HANDLE enumHandle,
   _In_ UINT32 numEntriesRequested,
   _Outptr_result_buffer_(*numEntriesReturned) IPSEC_SA_CONTEXT0*** entries,
   _Out_ UINT32* numEntriesReturned
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
IPsecSaContextEnum1(
   _In_ HANDLE engineHandle,
   _In_ HANDLE enumHandle,
   _In_ UINT32 numEntriesRequested,
   _Outptr_result_buffer_(*numEntriesReturned) IPSEC_SA_CONTEXT1*** entries,
   _Out_ UINT32* numEntriesReturned
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
IPsecSaContextDestroyEnumHandle0(
   _In_ HANDLE engineHandle,
   _Inout_ HANDLE enumHandle
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
IPsecSaCreateEnumHandle0(
   _In_ HANDLE engineHandle,
   _In_opt_ const IPSEC_SA_ENUM_TEMPLATE0* enumTemplate,
   _Out_ HANDLE* enumHandle
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
IPsecSaEnum0(
   _In_ HANDLE engineHandle,
   _In_ HANDLE enumHandle,
   _In_ UINT32 numEntriesRequested,
   _Outptr_result_buffer_(*numEntriesReturned) IPSEC_SA_DETAILS0*** entries,
   _Out_ UINT32* numEntriesReturned
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
IPsecSaEnum1(
   _In_ HANDLE engineHandle,
   _In_ HANDLE enumHandle,
   _In_ UINT32 numEntriesRequested,
   _Outptr_result_buffer_(*numEntriesReturned) IPSEC_SA_DETAILS1*** entries,
   _Out_ UINT32* numEntriesReturned
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
IPsecSaDestroyEnumHandle0(
   _In_ HANDLE engineHandle,
   _Inout_ HANDLE enumHandle
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
IPsecSaDbGetSecurityInfo0(
   _In_ HANDLE engineHandle,
   _In_ SECURITY_INFORMATION securityInfo,
   _Outptr_result_maybenull_ PSID* sidOwner,
   _Outptr_result_maybenull_ PSID* sidGroup,
   _Outptr_result_maybenull_ PACL* dacl,
   _Outptr_result_maybenull_ PACL* sacl,
   _Outptr_ PSECURITY_DESCRIPTOR* securityDescriptor
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
IPsecSaDbSetSecurityInfo0(
   _In_ HANDLE engineHandle,
   _In_ SECURITY_INFORMATION securityInfo,
   _In_opt_ const SID* sidOwner,
   _In_opt_ const SID* sidGroup,
   _In_opt_ const ACL* dacl,
   _In_opt_ const ACL* sacl
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
IPsecDospGetStatistics0(
   _In_ HANDLE engineHandle,
   _Out_ IPSEC_DOSP_STATISTICS0* idpStatistics
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
IPsecDospStateCreateEnumHandle0(
   _In_ HANDLE engineHandle,
   _In_opt_ const IPSEC_DOSP_STATE_ENUM_TEMPLATE0* enumTemplate,
   _Out_ HANDLE* enumHandle
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
IPsecDospStateEnum0(
   _In_ HANDLE engineHandle,
   _In_ HANDLE enumHandle,
   _In_ UINT32 numEntriesRequested,
   _Outptr_result_buffer_(*numEntries) IPSEC_DOSP_STATE0*** entries,
   _Out_ UINT32* numEntries
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
IPsecDospStateDestroyEnumHandle0(
   _In_ HANDLE engineHandle,
   _Inout_ HANDLE enumHandle
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
IPsecDospGetSecurityInfo0(
   _In_ HANDLE engineHandle,
   _In_ SECURITY_INFORMATION securityInfo,
   _Outptr_result_maybenull_ PSID* sidOwner,
   _Outptr_result_maybenull_ PSID* sidGroup,
   _Outptr_result_maybenull_ PACL* dacl,
   _Outptr_result_maybenull_ PACL* sacl,
   _Outptr_ PSECURITY_DESCRIPTOR* securityDescriptor
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
IPsecDospSetSecurityInfo0(
   _In_ HANDLE engineHandle,
   _In_ SECURITY_INFORMATION securityInfo,
   _In_opt_ const SID* sidOwner,
   _In_opt_ const SID* sidGroup,
   _In_opt_ const ACL* dacl,
   _In_opt_ const ACL* sacl
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
IkeextGetStatistics0(
   _In_ HANDLE engineHandle,
   _Out_ IKEEXT_STATISTICS0* ikeextStatistics
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
IkeextGetStatistics1(
   _In_ HANDLE engineHandle,
   _Out_ IKEEXT_STATISTICS1* ikeextStatistics
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
IkeextSaDeleteById0(
   _In_ HANDLE engineHandle,
   _In_ UINT64 id
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
IkeextSaGetById0(
   _In_ HANDLE engineHandle,
   _In_ UINT64 id,
   _Outptr_ IKEEXT_SA_DETAILS0** sa
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
IkeextSaGetById1(
   _In_ HANDLE engineHandle,
   _In_ UINT64 id,
   _In_opt_ GUID* saLookupContext,
   _Outptr_ IKEEXT_SA_DETAILS1** sa
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
IkeextSaGetById2(
   _In_ HANDLE engineHandle,
   _In_ UINT64 id,
   _In_opt_ GUID* saLookupContext,
   _Outptr_ IKEEXT_SA_DETAILS2** sa
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
IkeextSaCreateEnumHandle0(
   _In_ HANDLE engineHandle,
   _In_opt_ const IKEEXT_SA_ENUM_TEMPLATE0* enumTemplate,
   _Out_ HANDLE* enumHandle
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
IkeextSaEnum0(
   _In_ HANDLE engineHandle,
   _In_ HANDLE enumHandle,
   _In_ UINT32 numEntriesRequested,
   _Outptr_result_buffer_(*numEntriesReturned) IKEEXT_SA_DETAILS0*** entries,
   _Out_ UINT32* numEntriesReturned
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
IkeextSaEnum1(
   _In_ HANDLE engineHandle,
   _In_ HANDLE enumHandle,
   _In_ UINT32 numEntriesRequested,
   _Outptr_result_buffer_(*numEntriesReturned) IKEEXT_SA_DETAILS1*** entries,
   _Out_ UINT32* numEntriesReturned
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
IkeextSaEnum2(
   _In_ HANDLE engineHandle,
   _In_ HANDLE enumHandle,
   _In_ UINT32 numEntriesRequested,
   _Outptr_result_buffer_(*numEntriesReturned) IKEEXT_SA_DETAILS2*** entries,
   _Out_ UINT32* numEntriesReturned
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
IkeextSaDestroyEnumHandle0(
   _In_ HANDLE engineHandle,
   _Inout_ HANDLE enumHandle
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
IkeextSaDbGetSecurityInfo0(
   _In_ HANDLE engineHandle,
   _In_ SECURITY_INFORMATION securityInfo,
   _Outptr_result_maybenull_ PSID* sidOwner,
   _Outptr_result_maybenull_ PSID* sidGroup,
   _Outptr_result_maybenull_ PACL* dacl,
   _Outptr_result_maybenull_ PACL* sacl,
   _Outptr_ PSECURITY_DESCRIPTOR* securityDescriptor
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
IkeextSaDbSetSecurityInfo0(
   _In_ HANDLE engineHandle,
   _In_ SECURITY_INFORMATION securityInfo,
   _In_opt_ const SID* sidOwner,
   _In_opt_ const SID* sidGroup,
   _In_opt_ const ACL* dacl,
   _In_opt_ const ACL* sacl
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmNetEventCreateEnumHandle0(
   _In_ HANDLE engineHandle,
   _In_opt_ const FWPM_NET_EVENT_ENUM_TEMPLATE0* enumTemplate,
   _Out_ HANDLE* enumHandle
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmNetEventEnum0(
   _In_ HANDLE engineHandle,
   _In_ HANDLE enumHandle,
   _In_ UINT32 numEntriesRequested,
   _Outptr_result_buffer_(*numEntriesReturned) FWPM_NET_EVENT0*** entries,
   _Out_ UINT32* numEntriesReturned
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmNetEventEnum1(
   _In_ HANDLE engineHandle,
   _In_ HANDLE enumHandle,
   _In_ UINT32 numEntriesRequested,
   _Outptr_result_buffer_(*numEntriesReturned) FWPM_NET_EVENT1*** entries,
   _Out_ UINT32* numEntriesReturned
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmNetEventEnum2(
   _In_ HANDLE engineHandle,
   _In_ HANDLE enumHandle,
   _In_ UINT32 numEntriesRequested,
   _Outptr_result_buffer_(*numEntriesReturned) FWPM_NET_EVENT2*** entries,
   _Out_ UINT32* numEntriesReturned
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmNetEventEnum3(
   _In_ HANDLE engineHandle,
   _In_ HANDLE enumHandle,
   _In_ UINT32 numEntriesRequested,
   _Outptr_result_buffer_(*numEntriesReturned) FWPM_NET_EVENT3*** entries,
   _Out_ UINT32* numEntriesReturned
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmNetEventEnum4(
   _In_ HANDLE engineHandle,
   _In_ HANDLE enumHandle,
   _In_ UINT32 numEntriesRequested,
   _Outptr_result_buffer_(*numEntriesReturned) FWPM_NET_EVENT4*** entries,
   _Out_ UINT32* numEntriesReturned
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmNetEventEnum5(
   _In_ HANDLE engineHandle,
   _In_ HANDLE enumHandle,
   _In_ UINT32 numEntriesRequested,
   _Outptr_result_buffer_(*numEntriesReturned) FWPM_NET_EVENT5*** entries,
   _Out_ UINT32* numEntriesReturned
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmNetEventDestroyEnumHandle0(
   _In_ HANDLE engineHandle,
   _Inout_ HANDLE enumHandle
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmNetEventsGetSecurityInfo0(
   _In_ HANDLE engineHandle,
   _In_ SECURITY_INFORMATION securityInfo,
   _Outptr_result_maybenull_ PSID* sidOwner,
   _Outptr_result_maybenull_ PSID* sidGroup,
   _Outptr_result_maybenull_ PACL* dacl,
   _Outptr_result_maybenull_ PACL* sacl,
   _Outptr_ PSECURITY_DESCRIPTOR* securityDescriptor
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmNetEventsSetSecurityInfo0(
   _In_ HANDLE engineHandle,
   _In_ SECURITY_INFORMATION securityInfo,
   _In_opt_ const SID* sidOwner,
   _In_opt_ const SID* sidGroup,
   _In_opt_ const ACL* dacl,
   _In_opt_ const ACL* sacl
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmConnectionGetById0(
   _In_ HANDLE engineHandle,
   _In_ UINT64 id,
   _Outptr_ FWPM_CONNECTION0** connection
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmConnectionEnum0(
    _In_ HANDLE engineHandle,
    _In_ HANDLE enumHandle,
    _In_ UINT32 numEntriesRequested,
    _Outptr_result_buffer_(*numEntriesReturned) FWPM_CONNECTION0*** entries,
    _Out_ UINT32 *numEntriesReturned
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmConnectionCreateEnumHandle0(
   _In_ HANDLE engineHandle,
   _In_opt_ const FWPM_CONNECTION_ENUM_TEMPLATE0 *enumTemplate,
   _Out_ HANDLE *enumHandle
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmConnectionDestroyEnumHandle0(
   _In_ HANDLE engineHandle,
   _In_ HANDLE enumHandle
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmConnectionGetSecurityInfo0(
   _In_ HANDLE engineHandle,
   _In_ SECURITY_INFORMATION securityInfo,
   _Outptr_result_maybenull_ PSID* sidOwner,
   _Outptr_result_maybenull_ PSID* sidGroup,
   _Outptr_result_maybenull_ PACL* dacl,
   _Outptr_result_maybenull_ PACL* sacl,
   _Outptr_ PSECURITY_DESCRIPTOR* securityDescriptor
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmConnectionSetSecurityInfo0(
   _In_ HANDLE engineHandle,
   _In_ SECURITY_INFORMATION securityInfo,
   _In_opt_ const SID* sidOwner,
   _In_opt_ const SID* sidGroup,
   _In_opt_ const ACL* dacl,
   _In_opt_ const ACL* sacl
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmvSwitchEventsGetSecurityInfo0(
   _In_ HANDLE engineHandle,
   _In_ SECURITY_INFORMATION securityInfo,
   _Outptr_result_maybenull_ PSID* sidOwner,
   _Outptr_result_maybenull_ PSID* sidGroup,
   _Outptr_result_maybenull_ PACL* dacl,
   _Outptr_result_maybenull_ PACL* sacl,
   _Outptr_ PSECURITY_DESCRIPTOR* securityDescriptor
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
FwpmvSwitchEventsSetSecurityInfo0(
   _In_ HANDLE engineHandle,
   _In_ SECURITY_INFORMATION securityInfo,
   _In_opt_ const SID* sidOwner,
   _In_opt_ const SID* sidGroup,
   _In_opt_ const ACL* dacl,
   _In_opt_ const ACL* sacl
   );
}
#endif
#pragma endregion
