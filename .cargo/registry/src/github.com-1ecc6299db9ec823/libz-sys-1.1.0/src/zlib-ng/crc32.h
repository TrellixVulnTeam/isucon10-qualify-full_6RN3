#ifndef CRC32_H_
#define CRC32_H_

/* crc32.h -- tables for rapid CRC calculation
 * Generated automatically by makecrct.c
 */

static const uint32_t crc_table[8][256] =
{
  {
    0x00000000, 0x77073096, 0xee0e612c, 0x990951ba, 0x076dc419,
    0x706af48f, 0xe963a535, 0x9e6495a3, 0x0edb8832, 0x79dcb8a4,
    0xe0d5e91e, 0x97d2d988, 0x09b64c2b, 0x7eb17cbd, 0xe7b82d07,
    0x90bf1d91, 0x1db71064, 0x6ab020f2, 0xf3b97148, 0x84be41de,
    0x1adad47d, 0x6ddde4eb, 0xf4d4b551, 0x83d385c7, 0x136c9856,
    0x646ba8c0, 0xfd62f97a, 0x8a65c9ec, 0x14015c4f, 0x63066cd9,
    0xfa0f3d63, 0x8d080df5, 0x3b6e20c8, 0x4c69105e, 0xd56041e4,
    0xa2677172, 0x3c03e4d1, 0x4b04d447, 0xd20d85fd, 0xa50ab56b,
    0x35b5a8fa, 0x42b2986c, 0xdbbbc9d6, 0xacbcf940, 0x32d86ce3,
    0x45df5c75, 0xdcd60dcf, 0xabd13d59, 0x26d930ac, 0x51de003a,
    0xc8d75180, 0xbfd06116, 0x21b4f4b5, 0x56b3c423, 0xcfba9599,
    0xb8bda50f, 0x2802b89e, 0x5f058808, 0xc60cd9b2, 0xb10be924,
    0x2f6f7c87, 0x58684c11, 0xc1611dab, 0xb6662d3d, 0x76dc4190,
    0x01db7106, 0x98d220bc, 0xefd5102a, 0x71b18589, 0x06b6b51f,
    0x9fbfe4a5, 0xe8b8d433, 0x7807c9a2, 0x0f00f934, 0x9609a88e,
    0xe10e9818, 0x7f6a0dbb, 0x086d3d2d, 0x91646c97, 0xe6635c01,
    0x6b6b51f4, 0x1c6c6162, 0x856530d8, 0xf262004e, 0x6c0695ed,
    0x1b01a57b, 0x8208f4c1, 0xf50fc457, 0x65b0d9c6, 0x12b7e950,
    0x8bbeb8ea, 0xfcb9887c, 0x62dd1ddf, 0x15da2d49, 0x8cd37cf3,
    0xfbd44c65, 0x4db26158, 0x3ab551ce, 0xa3bc0074, 0xd4bb30e2,
    0x4adfa541, 0x3dd895d7, 0xa4d1c46d, 0xd3d6f4fb, 0x4369e96a,
    0x346ed9fc, 0xad678846, 0xda60b8d0, 0x44042d73, 0x33031de5,
    0xaa0a4c5f, 0xdd0d7cc9, 0x5005713c, 0x270241aa, 0xbe0b1010,
    0xc90c2086, 0x5768b525, 0x206f85b3, 0xb966d409, 0xce61e49f,
    0x5edef90e, 0x29d9c998, 0xb0d09822, 0xc7d7a8b4, 0x59b33d17,
    0x2eb40d81, 0xb7bd5c3b, 0xc0ba6cad, 0xedb88320, 0x9abfb3b6,
    0x03b6e20c, 0x74b1d29a, 0xead54739, 0x9dd277af, 0x04db2615,
    0x73dc1683, 0xe3630b12, 0x94643b84, 0x0d6d6a3e, 0x7a6a5aa8,
    0xe40ecf0b, 0x9309ff9d, 0x0a00ae27, 0x7d079eb1, 0xf00f9344,
    0x8708a3d2, 0x1e01f268, 0x6906c2fe, 0xf762575d, 0x806567cb,
    0x196c3671, 0x6e6b06e7, 0xfed41b76, 0x89d32be0, 0x10da7a5a,
    0x67dd4acc, 0xf9b9df6f, 0x8ebeeff9, 0x17b7be43, 0x60b08ed5,
    0xd6d6a3e8, 0xa1d1937e, 0x38d8c2c4, 0x4fdff252, 0xd1bb67f1,
    0xa6bc5767, 0x3fb506dd, 0x48b2364b, 0xd80d2bda, 0xaf0a1b4c,
    0x36034af6, 0x41047a60, 0xdf60efc3, 0xa867df55, 0x316e8eef,
    0x4669be79, 0xcb61b38c, 0xbc66831a, 0x256fd2a0, 0x5268e236,
    0xcc0c7795, 0xbb0b4703, 0x220216b9, 0x5505262f, 0xc5ba3bbe,
    0xb2bd0b28, 0x2bb45a92, 0x5cb36a04, 0xc2d7ffa7, 0xb5d0cf31,
    0x2cd99e8b, 0x5bdeae1d, 0x9b64c2b0, 0xec63f226, 0x756aa39c,
    0x026d930a, 0x9c0906a9, 0xeb0e363f, 0x72076785, 0x05005713,
    0x95bf4a82, 0xe2b87a14, 0x7bb12bae, 0x0cb61b38, 0x92d28e9b,
    0xe5d5be0d, 0x7cdcefb7, 0x0bdbdf21, 0x86d3d2d4, 0xf1d4e242,
    0x68ddb3f8, 0x1fda836e, 0x81be16cd, 0xf6b9265b, 0x6fb077e1,
    0x18b74777, 0x88085ae6, 0xff0f6a70, 0x66063bca, 0x11010b5c,
    0x8f659eff, 0xf862ae69, 0x616bffd3, 0x166ccf45, 0xa00ae278,
    0xd70dd2ee, 0x4e048354, 0x3903b3c2, 0xa7672661, 0xd06016f7,
    0x4969474d, 0x3e6e77db, 0xaed16a4a, 0xd9d65adc, 0x40df0b66,
    0x37d83bf0, 0xa9bcae53, 0xdebb9ec5, 0x47b2cf7f, 0x30b5ffe9,
    0xbdbdf21c, 0xcabac28a, 0x53b39330, 0x24b4a3a6, 0xbad03605,
    0xcdd70693, 0x54de5729, 0x23d967bf, 0xb3667a2e, 0xc4614ab8,
    0x5d681b02, 0x2a6f2b94, 0xb40bbe37, 0xc30c8ea1, 0x5a05df1b,
    0x2d02ef8d
  },
  {
    0x00000000, 0x191b3141, 0x32366282, 0x2b2d53c3, 0x646cc504,
    0x7d77f445, 0x565aa786, 0x4f4196c7, 0xc8d98a08, 0xd1c2bb49,
    0xfaefe88a, 0xe3f4d9cb, 0xacb54f0c, 0xb5ae7e4d, 0x9e832d8e,
    0x87981ccf, 0x4ac21251, 0x53d92310, 0x78f470d3, 0x61ef4192,
    0x2eaed755, 0x37b5e614, 0x1c98b5d7, 0x05838496, 0x821b9859,
    0x9b00a918, 0xb02dfadb, 0xa936cb9a, 0xe6775d5d, 0xff6c6c1c,
    0xd4413fdf, 0xcd5a0e9e, 0x958424a2, 0x8c9f15e3, 0xa7b24620,
    0xbea97761, 0xf1e8e1a6, 0xe8f3d0e7, 0xc3de8324, 0xdac5b265,
    0x5d5daeaa, 0x44469feb, 0x6f6bcc28, 0x7670fd69, 0x39316bae,
    0x202a5aef, 0x0b07092c, 0x121c386d, 0xdf4636f3, 0xc65d07b2,
    0xed705471, 0xf46b6530, 0xbb2af3f7, 0xa231c2b6, 0x891c9175,
    0x9007a034, 0x179fbcfb, 0x0e848dba, 0x25a9de79, 0x3cb2ef38,
    0x73f379ff, 0x6ae848be, 0x41c51b7d, 0x58de2a3c, 0xf0794f05,
    0xe9627e44, 0xc24f2d87, 0xdb541cc6, 0x94158a01, 0x8d0ebb40,
    0xa623e883, 0xbf38d9c2, 0x38a0c50d, 0x21bbf44c, 0x0a96a78f,
    0x138d96ce, 0x5ccc0009, 0x45d73148, 0x6efa628b, 0x77e153ca,
    0xbabb5d54, 0xa3a06c15, 0x888d3fd6, 0x91960e97, 0xded79850,
    0xc7cca911, 0xece1fad2, 0xf5facb93, 0x7262d75c, 0x6b79e61d,
    0x4054b5de, 0x594f849f, 0x160e1258, 0x0f152319, 0x243870da,
    0x3d23419b, 0x65fd6ba7, 0x7ce65ae6, 0x57cb0925, 0x4ed03864,
    0x0191aea3, 0x188a9fe2, 0x33a7cc21, 0x2abcfd60, 0xad24e1af,
    0xb43fd0ee, 0x9f12832d, 0x8609b26c, 0xc94824ab, 0xd05315ea,
    0xfb7e4629, 0xe2657768, 0x2f3f79f6, 0x362448b7, 0x1d091b74,
    0x04122a35, 0x4b53bcf2, 0x52488db3, 0x7965de70, 0x607eef31,
    0xe7e6f3fe, 0xfefdc2bf, 0xd5d0917c, 0xcccba03d, 0x838a36fa,
    0x9a9107bb, 0xb1bc5478, 0xa8a76539, 0x3b83984b, 0x2298a90a,
    0x09b5fac9, 0x10aecb88, 0x5fef5d4f, 0x46f46c0e, 0x6dd93fcd,
    0x74c20e8c, 0xf35a1243, 0xea412302, 0xc16c70c1, 0xd8774180,
    0x9736d747, 0x8e2de606, 0xa500b5c5, 0xbc1b8484, 0x71418a1a,
    0x685abb5b, 0x4377e898, 0x5a6cd9d9, 0x152d4f1e, 0x0c367e5f,
    0x271b2d9c, 0x3e001cdd, 0xb9980012, 0xa0833153, 0x8bae6290,
    0x92b553d1, 0xddf4c516, 0xc4eff457, 0xefc2a794, 0xf6d996d5,
    0xae07bce9, 0xb71c8da8, 0x9c31de6b, 0x852aef2a, 0xca6b79ed,
    0xd37048ac, 0xf85d1b6f, 0xe1462a2e, 0x66de36e1, 0x7fc507a0,
    0x54e85463, 0x4df36522, 0x02b2f3e5, 0x1ba9c2a4, 0x30849167,
    0x299fa026, 0xe4c5aeb8, 0xfdde9ff9, 0xd6f3cc3a, 0xcfe8fd7b,
    0x80a96bbc, 0x99b25afd, 0xb29f093e, 0xab84387f, 0x2c1c24b0,
    0x350715f1, 0x1e2a4632, 0x07317773, 0x4870e1b4, 0x516bd0f5,
    0x7a468336, 0x635db277, 0xcbfad74e, 0xd2e1e60f, 0xf9ccb5cc,
    0xe0d7848d, 0xaf96124a, 0xb68d230b, 0x9da070c8, 0x84bb4189,
    0x03235d46, 0x1a386c07, 0x31153fc4, 0x280e0e85, 0x674f9842,
    0x7e54a903, 0x5579fac0, 0x4c62cb81, 0x8138c51f, 0x9823f45e,
    0xb30ea79d, 0xaa1596dc, 0xe554001b, 0xfc4f315a, 0xd7626299,
    0xce7953d8, 0x49e14f17, 0x50fa7e56, 0x7bd72d95, 0x62cc1cd4,
    0x2d8d8a13, 0x3496bb52, 0x1fbbe891, 0x06a0d9d0, 0x5e7ef3ec,
    0x4765c2ad, 0x6c48916e, 0x7553a02f, 0x3a1236e8, 0x230907a9,
    0x0824546a, 0x113f652b, 0x96a779e4, 0x8fbc48a5, 0xa4911b66,
    0xbd8a2a27, 0xf2cbbce0, 0xebd08da1, 0xc0fdde62, 0xd9e6ef23,
    0x14bce1bd, 0x0da7d0fc, 0x268a833f, 0x3f91b27e, 0x70d024b9,
    0x69cb15f8, 0x42e6463b, 0x5bfd777a, 0xdc656bb5, 0xc57e5af4,
    0xee530937, 0xf7483876, 0xb809aeb1, 0xa1129ff0, 0x8a3fcc33,
    0x9324fd72
  },
  {
    0x00000000, 0x01c26a37, 0x0384d46e, 0x0246be59, 0x0709a8dc,
    0x06cbc2eb, 0x048d7cb2, 0x054f1685, 0x0e1351b8, 0x0fd13b8f,
    0x0d9785d6, 0x0c55efe1, 0x091af964, 0x08d89353, 0x0a9e2d0a,
    0x0b5c473d, 0x1c26a370, 0x1de4c947, 0x1fa2771e, 0x1e601d29,
    0x1b2f0bac, 0x1aed619b, 0x18abdfc2, 0x1969b5f5, 0x1235f2c8,
    0x13f798ff, 0x11b126a6, 0x10734c91, 0x153c5a14, 0x14fe3023,
    0x16b88e7a, 0x177ae44d, 0x384d46e0, 0x398f2cd7, 0x3bc9928e,
    0x3a0bf8b9, 0x3f44ee3c, 0x3e86840b, 0x3cc03a52, 0x3d025065,
    0x365e1758, 0x379c7d6f, 0x35dac336, 0x3418a901, 0x3157bf84,
    0x3095d5b3, 0x32d36bea, 0x331101dd, 0x246be590, 0x25a98fa7,
    0x27ef31fe, 0x262d5bc9, 0x23624d4c, 0x22a0277b, 0x20e69922,
    0x2124f315, 0x2a78b428, 0x2bbade1f, 0x29fc6046, 0x283e0a71,
    0x2d711cf4, 0x2cb376c3, 0x2ef5c89a, 0x2f37a2ad, 0x709a8dc0,
    0x7158e7f7, 0x731e59ae, 0x72dc3399, 0x7793251c, 0x76514f2b,
    0x7417f172, 0x75d59b45, 0x7e89dc78, 0x7f4bb64f, 0x7d0d0816,
    0x7ccf6221, 0x798074a4, 0x78421e93, 0x7a04a0ca, 0x7bc6cafd,
    0x6cbc2eb0, 0x6d7e4487, 0x6f38fade, 0x6efa90e9, 0x6bb5866c,
    0x6a77ec5b, 0x68315202, 0x69f33835, 0x62af7f08, 0x636d153f,
    0x612bab66, 0x60e9c151, 0x65a6d7d4, 0x6464bde3, 0x662203ba,
    0x67e0698d, 0x48d7cb20, 0x4915a117, 0x4b531f4e, 0x4a917579,
    0x4fde63fc, 0x4e1c09cb, 0x4c5ab792, 0x4d98dda5, 0x46c49a98,
    0x4706f0af, 0x45404ef6, 0x448224c1, 0x41cd3244, 0x400f5873,
    0x4249e62a, 0x438b8c1d, 0x54f16850, 0x55330267, 0x5775bc3e,
    0x56b7d609, 0x53f8c08c, 0x523aaabb, 0x507c14e2, 0x51be7ed5,
    0x5ae239e8, 0x5b2053df, 0x5966ed86, 0x58a487b1, 0x5deb9134,
    0x5c29fb03, 0x5e6f455a, 0x5fad2f6d, 0xe1351b80, 0xe0f771b7,
    0xe2b1cfee, 0xe373a5d9, 0xe63cb35c, 0xe7fed96b, 0xe5b86732,
    0xe47a0d05, 0xef264a38, 0xeee4200f, 0xeca29e56, 0xed60f461,
    0xe82fe2e4, 0xe9ed88d3, 0xebab368a, 0xea695cbd, 0xfd13b8f0,
    0xfcd1d2c7, 0xfe976c9e, 0xff5506a9, 0xfa1a102c, 0xfbd87a1b,
    0xf99ec442, 0xf85cae75, 0xf300e948, 0xf2c2837f, 0xf0843d26,
    0xf1465711, 0xf4094194, 0xf5cb2ba3, 0xf78d95fa, 0xf64fffcd,
    0xd9785d60, 0xd8ba3757, 0xdafc890e, 0xdb3ee339, 0xde71f5bc,
    0xdfb39f8b, 0xddf521d2, 0xdc374be5, 0xd76b0cd8, 0xd6a966ef,
    0xd4efd8b6, 0xd52db281, 0xd062a404, 0xd1a0ce33, 0xd3e6706a,
    0xd2241a5d, 0xc55efe10, 0xc49c9427, 0xc6da2a7e, 0xc7184049,
    0xc25756cc, 0xc3953cfb, 0xc1d382a2, 0xc011e895, 0xcb4dafa8,
    0xca8fc59f, 0xc8c97bc6, 0xc90b11f1, 0xcc440774, 0xcd866d43,
    0xcfc0d31a, 0xce02b92d, 0x91af9640, 0x906dfc77, 0x922b422e,
    0x93e92819, 0x96a63e9c, 0x976454ab, 0x9522eaf2, 0x94e080c5,
    0x9fbcc7f8, 0x9e7eadcf, 0x9c381396, 0x9dfa79a1, 0x98b56f24,
    0x99770513, 0x9b31bb4a, 0x9af3d17d, 0x8d893530, 0x8c4b5f07,
    0x8e0de15e, 0x8fcf8b69, 0x8a809dec, 0x8b42f7db, 0x89044982,
    0x88c623b5, 0x839a6488, 0x82580ebf, 0x801eb0e6, 0x81dcdad1,
    0x8493cc54, 0x8551a663, 0x8717183a, 0x86d5720d, 0xa9e2d0a0,
    0xa820ba97, 0xaa6604ce, 0xaba46ef9, 0xaeeb787c, 0xaf29124b,
    0xad6fac12, 0xacadc625, 0xa7f18118, 0xa633eb2f, 0xa4755576,
    0xa5b73f41, 0xa0f829c4, 0xa13a43f3, 0xa37cfdaa, 0xa2be979d,
    0xb5c473d0, 0xb40619e7, 0xb640a7be, 0xb782cd89, 0xb2cddb0c,
    0xb30fb13b, 0xb1490f62, 0xb08b6555, 0xbbd72268, 0xba15485f,
    0xb853f606, 0xb9919c31, 0xbcde8ab4, 0xbd1ce083, 0xbf5a5eda,
    0xbe9834ed
  },
  {
    0x00000000, 0xb8bc6765, 0xaa09c88b, 0x12b5afee, 0x8f629757,
    0x37def032, 0x256b5fdc, 0x9dd738b9, 0xc5b428ef, 0x7d084f8a,
    0x6fbde064, 0xd7018701, 0x4ad6bfb8, 0xf26ad8dd, 0xe0df7733,
    0x58631056, 0x5019579f, 0xe8a530fa, 0xfa109f14, 0x42acf871,
    0xdf7bc0c8, 0x67c7a7ad, 0x75720843, 0xcdce6f26, 0x95ad7f70,
    0x2d111815, 0x3fa4b7fb, 0x8718d09e, 0x1acfe827, 0xa2738f42,
    0xb0c620ac, 0x087a47c9, 0xa032af3e, 0x188ec85b, 0x0a3b67b5,
    0xb28700d0, 0x2f503869, 0x97ec5f0c, 0x8559f0e2, 0x3de59787,
    0x658687d1, 0xdd3ae0b4, 0xcf8f4f5a, 0x7733283f, 0xeae41086,
    0x525877e3, 0x40edd80d, 0xf851bf68, 0xf02bf8a1, 0x48979fc4,
    0x5a22302a, 0xe29e574f, 0x7f496ff6, 0xc7f50893, 0xd540a77d,
    0x6dfcc018, 0x359fd04e, 0x8d23b72b, 0x9f9618c5, 0x272a7fa0,
    0xbafd4719, 0x0241207c, 0x10f48f92, 0xa848e8f7, 0x9b14583d,
    0x23a83f58, 0x311d90b6, 0x89a1f7d3, 0x1476cf6a, 0xaccaa80f,
    0xbe7f07e1, 0x06c36084, 0x5ea070d2, 0xe61c17b7, 0xf4a9b859,
    0x4c15df3c, 0xd1c2e785, 0x697e80e0, 0x7bcb2f0e, 0xc377486b,
    0xcb0d0fa2, 0x73b168c7, 0x6104c729, 0xd9b8a04c, 0x446f98f5,
    0xfcd3ff90, 0xee66507e, 0x56da371b, 0x0eb9274d, 0xb6054028,
    0xa4b0efc6, 0x1c0c88a3, 0x81dbb01a, 0x3967d77f, 0x2bd27891,
    0x936e1ff4, 0x3b26f703, 0x839a9066, 0x912f3f88, 0x299358ed,
    0xb4446054, 0x0cf80731, 0x1e4da8df, 0xa6f1cfba, 0xfe92dfec,
    0x462eb889, 0x549b1767, 0xec277002, 0x71f048bb, 0xc94c2fde,
    0xdbf98030, 0x6345e755, 0x6b3fa09c, 0xd383c7f9, 0xc1366817,
    0x798a0f72, 0xe45d37cb, 0x5ce150ae, 0x4e54ff40, 0xf6e89825,
    0xae8b8873, 0x1637ef16, 0x048240f8, 0xbc3e279d, 0x21e91f24,
    0x99557841, 0x8be0d7af, 0x335cb0ca, 0xed59b63b, 0x55e5d15e,
    0x47507eb0, 0xffec19d5, 0x623b216c, 0xda874609, 0xc832e9e7,
    0x708e8e82, 0x28ed9ed4, 0x9051f9b1, 0x82e4565f, 0x3a58313a,
    0xa78f0983, 0x1f336ee6, 0x0d86c108, 0xb53aa66d, 0xbd40e1a4,
    0x05fc86c1, 0x1749292f, 0xaff54e4a, 0x322276f3, 0x8a9e1196,
    0x982bbe78, 0x2097d91d, 0x78f4c94b, 0xc048ae2e, 0xd2fd01c0,
    0x6a4166a5, 0xf7965e1c, 0x4f2a3979, 0x5d9f9697, 0xe523f1f2,
    0x4d6b1905, 0xf5d77e60, 0xe762d18e, 0x5fdeb6eb, 0xc2098e52,
    0x7ab5e937, 0x680046d9, 0xd0bc21bc, 0x88df31ea, 0x3063568f,
    0x22d6f961, 0x9a6a9e04, 0x07bda6bd, 0xbf01c1d8, 0xadb46e36,
    0x15080953, 0x1d724e9a, 0xa5ce29ff, 0xb77b8611, 0x0fc7e174,
    0x9210d9cd, 0x2aacbea8, 0x38191146, 0x80a57623, 0xd8c66675,
    0x607a0110, 0x72cfaefe, 0xca73c99b, 0x57a4f122, 0xef189647,
    0xfdad39a9, 0x45115ecc, 0x764dee06, 0xcef18963, 0xdc44268d,
    0x64f841e8, 0xf92f7951, 0x41931e34, 0x5326b1da, 0xeb9ad6bf,
    0xb3f9c6e9, 0x0b45a18c, 0x19f00e62, 0xa14c6907, 0x3c9b51be,
    0x842736db, 0x96929935, 0x2e2efe50, 0x2654b999, 0x9ee8defc,
    0x8c5d7112, 0x34e11677, 0xa9362ece, 0x118a49ab, 0x033fe645,
    0xbb838120, 0xe3e09176, 0x5b5cf613, 0x49e959fd, 0xf1553e98,
    0x6c820621, 0xd43e6144, 0xc68bceaa, 0x7e37a9cf, 0xd67f4138,
    0x6ec3265d, 0x7c7689b3, 0xc4caeed6, 0x591dd66f, 0xe1a1b10a,
    0xf3141ee4, 0x4ba87981, 0x13cb69d7, 0xab770eb2, 0xb9c2a15c,
    0x017ec639, 0x9ca9fe80, 0x241599e5, 0x36a0360b, 0x8e1c516e,
    0x866616a7, 0x3eda71c2, 0x2c6fde2c, 0x94d3b949, 0x090481f0,
    0xb1b8e695, 0xa30d497b, 0x1bb12e1e, 0x43d23e48, 0xfb6e592d,
    0xe9dbf6c3, 0x516791a6, 0xccb0a91f, 0x740cce7a, 0x66b96194,
    0xde0506f1
  },
  {
    0x00000000, 0x96300777, 0x2c610eee, 0xba510999, 0x19c46d07,
    0x8ff46a70, 0x35a563e9, 0xa395649e, 0x3288db0e, 0xa4b8dc79,
    0x1ee9d5e0, 0x88d9d297, 0x2b4cb609, 0xbd7cb17e, 0x072db8e7,
    0x911dbf90, 0x6410b71d, 0xf220b06a, 0x4871b9f3, 0xde41be84,
    0x7dd4da1a, 0xebe4dd6d, 0x51b5d4f4, 0xc785d383, 0x56986c13,
    0xc0a86b64, 0x7af962fd, 0xecc9658a, 0x4f5c0114, 0xd96c0663,
    0x633d0ffa, 0xf50d088d, 0xc8206e3b, 0x5e10694c, 0xe44160d5,
    0x727167a2, 0xd1e4033c, 0x47d4044b, 0xfd850dd2, 0x6bb50aa5,
    0xfaa8b535, 0x6c98b242, 0xd6c9bbdb, 0x40f9bcac, 0xe36cd832,
    0x755cdf45, 0xcf0dd6dc, 0x593dd1ab, 0xac30d926, 0x3a00de51,
    0x8051d7c8, 0x1661d0bf, 0xb5f4b421, 0x23c4b356, 0x9995bacf,
    0x0fa5bdb8, 0x9eb80228, 0x0888055f, 0xb2d90cc6, 0x24e90bb1,
    0x877c6f2f, 0x114c6858, 0xab1d61c1, 0x3d2d66b6, 0x9041dc76,
    0x0671db01, 0xbc20d298, 0x2a10d5ef, 0x8985b171, 0x1fb5b606,
    0xa5e4bf9f, 0x33d4b8e8, 0xa2c90778, 0x34f9000f, 0x8ea80996,
    0x18980ee1, 0xbb0d6a7f, 0x2d3d6d08, 0x976c6491, 0x015c63e6,
    0xf4516b6b, 0x62616c1c, 0xd8306585, 0x4e0062f2, 0xed95066c,
    0x7ba5011b, 0xc1f40882, 0x57c40ff5, 0xc6d9b065, 0x50e9b712,
    0xeab8be8b, 0x7c88b9fc, 0xdf1ddd62, 0x492dda15, 0xf37cd38c,
    0x654cd4fb, 0x5861b24d, 0xce51b53a, 0x7400bca3, 0xe230bbd4,
    0x41a5df4a, 0xd795d83d, 0x6dc4d1a4, 0xfbf4d6d3, 0x6ae96943,
    0xfcd96e34, 0x468867ad, 0xd0b860da, 0x732d0444, 0xe51d0333,
    0x5f4c0aaa, 0xc97c0ddd, 0x3c710550, 0xaa410227, 0x10100bbe,
    0x86200cc9, 0x25b56857, 0xb3856f20, 0x09d466b9, 0x9fe461ce,
    0x0ef9de5e, 0x98c9d929, 0x2298d0b0, 0xb4a8d7c7, 0x173db359,
    0x810db42e, 0x3b5cbdb7, 0xad6cbac0, 0x2083b8ed, 0xb6b3bf9a,
    0x0ce2b603, 0x9ad2b174, 0x3947d5ea, 0xaf77d29d, 0x1526db04,
    0x8316dc73, 0x120b63e3, 0x843b6494, 0x3e6a6d0d, 0xa85a6a7a,
    0x0bcf0ee4, 0x9dff0993, 0x27ae000a, 0xb19e077d, 0x44930ff0,
    0xd2a30887, 0x68f2011e, 0xfec20669, 0x5d5762f7, 0xcb676580,
    0x71366c19, 0xe7066b6e, 0x761bd4fe, 0xe02bd389, 0x5a7ada10,
    0xcc4add67, 0x6fdfb9f9, 0xf9efbe8e, 0x43beb717, 0xd58eb060,
    0xe8a3d6d6, 0x7e93d1a1, 0xc4c2d838, 0x52f2df4f, 0xf167bbd1,
    0x6757bca6, 0xdd06b53f, 0x4b36b248, 0xda2b0dd8, 0x4c1b0aaf,
    0xf64a0336, 0x607a0441, 0xc3ef60df, 0x55df67a8, 0xef8e6e31,
    0x79be6946, 0x8cb361cb, 0x1a8366bc, 0xa0d26f25, 0x36e26852,
    0x95770ccc, 0x03470bbb, 0xb9160222, 0x2f260555, 0xbe3bbac5,
    0x280bbdb2, 0x925ab42b, 0x046ab35c, 0xa7ffd7c2, 0x31cfd0b5,
    0x8b9ed92c, 0x1daede5b, 0xb0c2649b, 0x26f263ec, 0x9ca36a75,
    0x0a936d02, 0xa906099c, 0x3f360eeb, 0x85670772, 0x13570005,
    0x824abf95, 0x147ab8e2, 0xae2bb17b, 0x381bb60c, 0x9b8ed292,
    0x0dbed5e5, 0xb7efdc7c, 0x21dfdb0b, 0xd4d2d386, 0x42e2d4f1,
    0xf8b3dd68, 0x6e83da1f, 0xcd16be81, 0x5b26b9f6, 0xe177b06f,
    0x7747b718, 0xe65a0888, 0x706a0fff, 0xca3b0666, 0x5c0b0111,
    0xff9e658f, 0x69ae62f8, 0xd3ff6b61, 0x45cf6c16, 0x78e20aa0,
    0xeed20dd7, 0x5483044e, 0xc2b30339, 0x612667a7, 0xf71660d0,
    0x4d476949, 0xdb776e3e, 0x4a6ad1ae, 0xdc5ad6d9, 0x660bdf40,
    0xf03bd837, 0x53aebca9, 0xc59ebbde, 0x7fcfb247, 0xe9ffb530,
    0x1cf2bdbd, 0x8ac2baca, 0x3093b353, 0xa6a3b424, 0x0536d0ba,
    0x9306d7cd, 0x2957de54, 0xbf67d923, 0x2e7a66b3, 0xb84a61c4,
    0x021b685d, 0x942b6f2a, 0x37be0bb4, 0xa18e0cc3, 0x1bdf055a,
    0x8def022d
  },
  {
    0x00000000, 0x41311b19, 0x82623632, 0xc3532d2b, 0x04c56c64,
    0x45f4777d, 0x86a75a56, 0xc796414f, 0x088ad9c8, 0x49bbc2d1,
    0x8ae8effa, 0xcbd9f4e3, 0x0c4fb5ac, 0x4d7eaeb5, 0x8e2d839e,
    0xcf1c9887, 0x5112c24a, 0x1023d953, 0xd370f478, 0x9241ef61,
    0x55d7ae2e, 0x14e6b537, 0xd7b5981c, 0x96848305, 0x59981b82,
    0x18a9009b, 0xdbfa2db0, 0x9acb36a9, 0x5d5d77e6, 0x1c6c6cff,
    0xdf3f41d4, 0x9e0e5acd, 0xa2248495, 0xe3159f8c, 0x2046b2a7,
    0x6177a9be, 0xa6e1e8f1, 0xe7d0f3e8, 0x2483dec3, 0x65b2c5da,
    0xaaae5d5d, 0xeb9f4644, 0x28cc6b6f, 0x69fd7076, 0xae6b3139,
    0xef5a2a20, 0x2c09070b, 0x6d381c12, 0xf33646df, 0xb2075dc6,
    0x715470ed, 0x30656bf4, 0xf7f32abb, 0xb6c231a2, 0x75911c89,
    0x34a00790, 0xfbbc9f17, 0xba8d840e, 0x79dea925, 0x38efb23c,
    0xff79f373, 0xbe48e86a, 0x7d1bc541, 0x3c2ade58, 0x054f79f0,
    0x447e62e9, 0x872d4fc2, 0xc61c54db, 0x018a1594, 0x40bb0e8d,
    0x83e823a6, 0xc2d938bf, 0x0dc5a038, 0x4cf4bb21, 0x8fa7960a,
    0xce968d13, 0x0900cc5c, 0x4831d745, 0x8b62fa6e, 0xca53e177,
    0x545dbbba, 0x156ca0a3, 0xd63f8d88, 0x970e9691, 0x5098d7de,
    0x11a9ccc7, 0xd2fae1ec, 0x93cbfaf5, 0x5cd76272, 0x1de6796b,
    0xdeb55440, 0x9f844f59, 0x58120e16, 0x1923150f, 0xda703824,
    0x9b41233d, 0xa76bfd65, 0xe65ae67c, 0x2509cb57, 0x6438d04e,
    0xa3ae9101, 0xe29f8a18, 0x21cca733, 0x60fdbc2a, 0xafe124ad,
    0xeed03fb4, 0x2d83129f, 0x6cb20986, 0xab2448c9, 0xea1553d0,
    0x29467efb, 0x687765e2, 0xf6793f2f, 0xb7482436, 0x741b091d,
    0x352a1204, 0xf2bc534b, 0xb38d4852, 0x70de6579, 0x31ef7e60,
    0xfef3e6e7, 0xbfc2fdfe, 0x7c91d0d5, 0x3da0cbcc, 0xfa368a83,
    0xbb07919a, 0x7854bcb1, 0x3965a7a8, 0x4b98833b, 0x0aa99822,
    0xc9fab509, 0x88cbae10, 0x4f5def5f, 0x0e6cf446, 0xcd3fd96d,
    0x8c0ec274, 0x43125af3, 0x022341ea, 0xc1706cc1, 0x804177d8,
    0x47d73697, 0x06e62d8e, 0xc5b500a5, 0x84841bbc, 0x1a8a4171,
    0x5bbb5a68, 0x98e87743, 0xd9d96c5a, 0x1e4f2d15, 0x5f7e360c,
    0x9c2d1b27, 0xdd1c003e, 0x120098b9, 0x533183a0, 0x9062ae8b,
    0xd153b592, 0x16c5f4dd, 0x57f4efc4, 0x94a7c2ef, 0xd596d9f6,
    0xe9bc07ae, 0xa88d1cb7, 0x6bde319c, 0x2aef2a85, 0xed796bca,
    0xac4870d3, 0x6f1b5df8, 0x2e2a46e1, 0xe136de66, 0xa007c57f,
    0x6354e854, 0x2265f34d, 0xe5f3b202, 0xa4c2a91b, 0x67918430,
    0x26a09f29, 0xb8aec5e4, 0xf99fdefd, 0x3accf3d6, 0x7bfde8cf,
    0xbc6ba980, 0xfd5ab299, 0x3e099fb2, 0x7f3884ab, 0xb0241c2c,
    0xf1150735, 0x32462a1e, 0x73773107, 0xb4e17048, 0xf5d06b51,
    0x3683467a, 0x77b25d63, 0x4ed7facb, 0x0fe6e1d2, 0xccb5ccf9,
    0x8d84d7e0, 0x4a1296af, 0x0b238db6, 0xc870a09d, 0x8941bb84,
    0x465d2303, 0x076c381a, 0xc43f1531, 0x850e0e28, 0x42984f67,
    0x03a9547e, 0xc0fa7955, 0x81cb624c, 0x1fc53881, 0x5ef42398,
    0x9da70eb3, 0xdc9615aa, 0x1b0054e5, 0x5a314ffc, 0x996262d7,
    0xd85379ce, 0x174fe149, 0x567efa50, 0x952dd77b, 0xd41ccc62,
    0x138a8d2d, 0x52bb9634, 0x91e8bb1f, 0xd0d9a006, 0xecf37e5e,
    0xadc26547, 0x6e91486c, 0x2fa05375, 0xe836123a, 0xa9070923,
    0x6a542408, 0x2b653f11, 0xe479a796, 0xa548bc8f, 0x661b91a4,
    0x272a8abd, 0xe0bccbf2, 0xa18dd0eb, 0x62defdc0, 0x23efe6d9,
    0xbde1bc14, 0xfcd0a70d, 0x3f838a26, 0x7eb2913f, 0xb924d070,
    0xf815cb69, 0x3b46e642, 0x7a77fd5b, 0xb56b65dc, 0xf45a7ec5,
    0x370953ee, 0x763848f7, 0xb1ae09b8, 0xf09f12a1, 0x33cc3f8a,
    0x72fd2493
  },
  {
    0x00000000, 0x376ac201, 0x6ed48403, 0x59be4602, 0xdca80907,
    0xebc2cb06, 0xb27c8d04, 0x85164f05, 0xb851130e, 0x8f3bd10f,
    0xd685970d, 0xe1ef550c, 0x64f91a09, 0x5393d808, 0x0a2d9e0a,
    0x3d475c0b, 0x70a3261c, 0x47c9e41d, 0x1e77a21f, 0x291d601e,
    0xac0b2f1b, 0x9b61ed1a, 0xc2dfab18, 0xf5b56919, 0xc8f23512,
    0xff98f713, 0xa626b111, 0x914c7310, 0x145a3c15, 0x2330fe14,
    0x7a8eb816, 0x4de47a17, 0xe0464d38, 0xd72c8f39, 0x8e92c93b,
    0xb9f80b3a, 0x3cee443f, 0x0b84863e, 0x523ac03c, 0x6550023d,
    0x58175e36, 0x6f7d9c37, 0x36c3da35, 0x01a91834, 0x84bf5731,
    0xb3d59530, 0xea6bd332, 0xdd011133, 0x90e56b24, 0xa78fa925,
    0xfe31ef27, 0xc95b2d26, 0x4c4d6223, 0x7b27a022, 0x2299e620,
    0x15f32421, 0x28b4782a, 0x1fdeba2b, 0x4660fc29, 0x710a3e28,
    0xf41c712d, 0xc376b32c, 0x9ac8f52e, 0xada2372f, 0xc08d9a70,
    0xf7e75871, 0xae591e73, 0x9933dc72, 0x1c259377, 0x2b4f5176,
    0x72f11774, 0x459bd575, 0x78dc897e, 0x4fb64b7f, 0x16080d7d,
    0x2162cf7c, 0xa4748079, 0x931e4278, 0xcaa0047a, 0xfdcac67b,
    0xb02ebc6c, 0x87447e6d, 0xdefa386f, 0xe990fa6e, 0x6c86b56b,
    0x5bec776a, 0x02523168, 0x3538f369, 0x087faf62, 0x3f156d63,
    0x66ab2b61, 0x51c1e960, 0xd4d7a665, 0xe3bd6464, 0xba032266,
    0x8d69e067, 0x20cbd748, 0x17a11549, 0x4e1f534b, 0x7975914a,
    0xfc63de4f, 0xcb091c4e, 0x92b75a4c, 0xa5dd984d, 0x989ac446,
    0xaff00647, 0xf64e4045, 0xc1248244, 0x4432cd41, 0x73580f40,
    0x2ae64942, 0x1d8c8b43, 0x5068f154, 0x67023355, 0x3ebc7557,
    0x09d6b756, 0x8cc0f853, 0xbbaa3a52, 0xe2147c50, 0xd57ebe51,
    0xe839e25a, 0xdf53205b, 0x86ed6659, 0xb187a458, 0x3491eb5d,
    0x03fb295c, 0x5a456f5e, 0x6d2fad5f, 0x801b35e1, 0xb771f7e0,
    0xeecfb1e2, 0xd9a573e3, 0x5cb33ce6, 0x6bd9fee7, 0x3267b8e5,
    0x050d7ae4, 0x384a26ef, 0x0f20e4ee, 0x569ea2ec, 0x61f460ed,
    0xe4e22fe8, 0xd388ede9, 0x8a36abeb, 0xbd5c69ea, 0xf0b813fd,
    0xc7d2d1fc, 0x9e6c97fe, 0xa90655ff, 0x2c101afa, 0x1b7ad8fb,
    0x42c49ef9, 0x75ae5cf8, 0x48e900f3, 0x7f83c2f2, 0x263d84f0,
    0x115746f1, 0x944109f4, 0xa32bcbf5, 0xfa958df7, 0xcdff4ff6,
    0x605d78d9, 0x5737bad8, 0x0e89fcda, 0x39e33edb, 0xbcf571de,
    0x8b9fb3df, 0xd221f5dd, 0xe54b37dc, 0xd80c6bd7, 0xef66a9d6,
    0xb6d8efd4, 0x81b22dd5, 0x04a462d0, 0x33cea0d1, 0x6a70e6d3,
    0x5d1a24d2, 0x10fe5ec5, 0x27949cc4, 0x7e2adac6, 0x494018c7,
    0xcc5657c2, 0xfb3c95c3, 0xa282d3c1, 0x95e811c0, 0xa8af4dcb,
    0x9fc58fca, 0xc67bc9c8, 0xf1110bc9, 0x740744cc, 0x436d86cd,
    0x1ad3c0cf, 0x2db902ce, 0x4096af91, 0x77fc6d90, 0x2e422b92,
    0x1928e993, 0x9c3ea696, 0xab546497, 0xf2ea2295, 0xc580e094,
    0xf8c7bc9f, 0xcfad7e9e, 0x9613389c, 0xa179fa9d, 0x246fb598,
    0x13057799, 0x4abb319b, 0x7dd1f39a, 0x3035898d, 0x075f4b8c,
    0x5ee10d8e, 0x698bcf8f, 0xec9d808a, 0xdbf7428b, 0x82490489,
    0xb523c688, 0x88649a83, 0xbf0e5882, 0xe6b01e80, 0xd1dadc81,
    0x54cc9384, 0x63a65185, 0x3a181787, 0x0d72d586, 0xa0d0e2a9,
    0x97ba20a8, 0xce0466aa, 0xf96ea4ab, 0x7c78ebae, 0x4b1229af,
    0x12ac6fad, 0x25c6adac, 0x1881f1a7, 0x2feb33a6, 0x765575a4,
    0x413fb7a5, 0xc429f8a0, 0xf3433aa1, 0xaafd7ca3, 0x9d97bea2,
    0xd073c4b5, 0xe71906b4, 0xbea740b6, 0x89cd82b7, 0x0cdbcdb2,
    0x3bb10fb3, 0x620f49b1, 0x55658bb0, 0x6822d7bb, 0x5f4815ba,
    0x06f653b8, 0x319c91b9, 0xb48adebc, 0x83e01cbd, 0xda5e5abf,
    0xed3498be
  },
  {
    0x00000000, 0x6567bcb8, 0x8bc809aa, 0xeeafb512, 0x5797628f,
    0x32f0de37, 0xdc5f6b25, 0xb938d79d, 0xef28b4c5, 0x8a4f087d,
    0x64e0bd6f, 0x018701d7, 0xb8bfd64a, 0xddd86af2, 0x3377dfe0,
    0x56106358, 0x9f571950, 0xfa30a5e8, 0x149f10fa, 0x71f8ac42,
    0xc8c07bdf, 0xada7c767, 0x43087275, 0x266fcecd, 0x707fad95,
    0x1518112d, 0xfbb7a43f, 0x9ed01887, 0x27e8cf1a, 0x428f73a2,
    0xac20c6b0, 0xc9477a08, 0x3eaf32a0, 0x5bc88e18, 0xb5673b0a,
    0xd00087b2, 0x6938502f, 0x0c5fec97, 0xe2f05985, 0x8797e53d,
    0xd1878665, 0xb4e03add, 0x5a4f8fcf, 0x3f283377, 0x8610e4ea,
    0xe3775852, 0x0dd8ed40, 0x68bf51f8, 0xa1f82bf0, 0xc49f9748,
    0x2a30225a, 0x4f579ee2, 0xf66f497f, 0x9308f5c7, 0x7da740d5,
    0x18c0fc6d, 0x4ed09f35, 0x2bb7238d, 0xc518969f, 0xa07f2a27,
    0x1947fdba, 0x7c204102, 0x928ff410, 0xf7e848a8, 0x3d58149b,
    0x583fa823, 0xb6901d31, 0xd3f7a189, 0x6acf7614, 0x0fa8caac,
    0xe1077fbe, 0x8460c306, 0xd270a05e, 0xb7171ce6, 0x59b8a9f4,
    0x3cdf154c, 0x85e7c2d1, 0xe0807e69, 0x0e2fcb7b, 0x6b4877c3,
    0xa20f0dcb, 0xc768b173, 0x29c70461, 0x4ca0b8d9, 0xf5986f44,
    0x90ffd3fc, 0x7e5066ee, 0x1b37da56, 0x4d27b90e, 0x284005b6,
    0xc6efb0a4, 0xa3880c1c, 0x1ab0db81, 0x7fd76739, 0x9178d22b,
    0xf41f6e93, 0x03f7263b, 0x66909a83, 0x883f2f91, 0xed589329,
    0x546044b4, 0x3107f80c, 0xdfa84d1e, 0xbacff1a6, 0xecdf92fe,
    0x89b82e46, 0x67179b54, 0x027027ec, 0xbb48f071, 0xde2f4cc9,
    0x3080f9db, 0x55e74563, 0x9ca03f6b, 0xf9c783d3, 0x176836c1,
    0x720f8a79, 0xcb375de4, 0xae50e15c, 0x40ff544e, 0x2598e8f6,
    0x73888bae, 0x16ef3716, 0xf8408204, 0x9d273ebc, 0x241fe921,
    0x41785599, 0xafd7e08b, 0xcab05c33, 0x3bb659ed, 0x5ed1e555,
    0xb07e5047, 0xd519ecff, 0x6c213b62, 0x094687da, 0xe7e932c8,
    0x828e8e70, 0xd49eed28, 0xb1f95190, 0x5f56e482, 0x3a31583a,
    0x83098fa7, 0xe66e331f, 0x08c1860d, 0x6da63ab5, 0xa4e140bd,
    0xc186fc05, 0x2f294917, 0x4a4ef5af, 0xf3762232, 0x96119e8a,
    0x78be2b98, 0x1dd99720, 0x4bc9f478, 0x2eae48c0, 0xc001fdd2,
    0xa566416a, 0x1c5e96f7, 0x79392a4f, 0x97969f5d, 0xf2f123e5,
    0x05196b4d, 0x607ed7f5, 0x8ed162e7, 0xebb6de5f, 0x528e09c2,
    0x37e9b57a, 0xd9460068, 0xbc21bcd0, 0xea31df88, 0x8f566330,
    0x61f9d622, 0x049e6a9a, 0xbda6bd07, 0xd8c101bf, 0x366eb4ad,
    0x53090815, 0x9a4e721d, 0xff29cea5, 0x11867bb7, 0x74e1c70f,
    0xcdd91092, 0xa8beac2a, 0x46111938, 0x2376a580, 0x7566c6d8,
    0x10017a60, 0xfeaecf72, 0x9bc973ca, 0x22f1a457, 0x479618ef,
    0xa939adfd, 0xcc5e1145, 0x06ee4d76, 0x6389f1ce, 0x8d2644dc,
    0xe841f864, 0x51792ff9, 0x341e9341, 0xdab12653, 0xbfd69aeb,
    0xe9c6f9b3, 0x8ca1450b, 0x620ef019, 0x07694ca1, 0xbe519b3c,
    0xdb362784, 0x35999296, 0x50fe2e2e, 0x99b95426, 0xfcdee89e,
    0x12715d8c, 0x7716e134, 0xce2e36a9, 0xab498a11, 0x45e63f03,
    0x208183bb, 0x7691e0e3, 0x13f65c5b, 0xfd59e949, 0x983e55f1,
    0x2106826c, 0x44613ed4, 0xaace8bc6, 0xcfa9377e, 0x38417fd6,
    0x5d26c36e, 0xb389767c, 0xd6eecac4, 0x6fd61d59, 0x0ab1a1e1,
    0xe41e14f3, 0x8179a84b, 0xd769cb13, 0xb20e77ab, 0x5ca1c2b9,
    0x39c67e01, 0x80fea99c, 0xe5991524, 0x0b36a036, 0x6e511c8e,
    0xa7166686, 0xc271da3e, 0x2cde6f2c, 0x49b9d394, 0xf0810409,
    0x95e6b8b1, 0x7b490da3, 0x1e2eb11b, 0x483ed243, 0x2d596efb,
    0xc3f6dbe9, 0xa6916751, 0x1fa9b0cc, 0x7ace0c74, 0x9461b966,
    0xf10605de
  }
};

static const uint32_t crc_comb[32][32] =
{
  {
    0x77073096, 0xee0e612c, 0x076dc419, 0x0edb8832, 0x1db71064,
    0x3b6e20c8, 0x76dc4190, 0xedb88320, 0x00000001, 0x00000002,
    0x00000004, 0x00000008, 0x00000010, 0x00000020, 0x00000040,
    0x00000080, 0x00000100, 0x00000200, 0x00000400, 0x00000800,
    0x00001000, 0x00002000, 0x00004000, 0x00008000, 0x00010000,
    0x00020000, 0x00040000, 0x00080000, 0x00100000, 0x00200000,
    0x00400000, 0x00800000
  },
  {
    0x191b3141, 0x32366282, 0x646cc504, 0xc8d98a08, 0x4ac21251,
    0x958424a2, 0xf0794f05, 0x3b83984b, 0x77073096, 0xee0e612c,
    0x076dc419, 0x0edb8832, 0x1db71064, 0x3b6e20c8, 0x76dc4190,
    0xedb88320, 0x00000001, 0x00000002, 0x00000004, 0x00000008,
    0x00000010, 0x00000020, 0x00000040, 0x00000080, 0x00000100,
    0x00000200, 0x00000400, 0x00000800, 0x00001000, 0x00002000,
    0x00004000, 0x00008000
  },
  {
    0xb8bc6765, 0xaa09c88b, 0x8f629757, 0xc5b428ef, 0x5019579f,
    0xa032af3e, 0x9b14583d, 0xed59b63b, 0x01c26a37, 0x0384d46e,
    0x0709a8dc, 0x0e1351b8, 0x1c26a370, 0x384d46e0, 0x709a8dc0,
    0xe1351b80, 0x191b3141, 0x32366282, 0x646cc504, 0xc8d98a08,
    0x4ac21251, 0x958424a2, 0xf0794f05, 0x3b83984b, 0x77073096,
    0xee0e612c, 0x076dc419, 0x0edb8832, 0x1db71064, 0x3b6e20c8,
    0x76dc4190, 0xedb88320
  },
  {
    0xccaa009e, 0x4225077d, 0x844a0efa, 0xd3e51bb5, 0x7cbb312b,
    0xf9766256, 0x299dc2ed, 0x533b85da, 0xa6770bb4, 0x979f1129,
    0xf44f2413, 0x33ef4e67, 0x67de9cce, 0xcfbd399c, 0x440b7579,
    0x8816eaf2, 0xcb5cd3a5, 0x4dc8a10b, 0x9b914216, 0xec53826d,
    0x03d6029b, 0x07ac0536, 0x0f580a6c, 0x1eb014d8, 0x3d6029b0,
    0x7ac05360, 0xf580a6c0, 0x30704bc1, 0x60e09782, 0xc1c12f04,
    0x58f35849, 0xb1e6b092
  },
  {
    0xae689191, 0x87a02563, 0xd4314c87, 0x73139f4f, 0xe6273e9e,
    0x173f7b7d, 0x2e7ef6fa, 0x5cfdedf4, 0xb9fbdbe8, 0xa886b191,
    0x8a7c6563, 0xcf89cc87, 0x44629f4f, 0x88c53e9e, 0xcafb7b7d,
    0x4e87f0bb, 0x9d0fe176, 0xe16ec4ad, 0x19ac8f1b, 0x33591e36,
    0x66b23c6c, 0xcd6478d8, 0x41b9f7f1, 0x8373efe2, 0xdd96d985,
    0x605cb54b, 0xc0b96a96, 0x5a03d36d, 0xb407a6da, 0xb37e4bf5,
    0xbd8d91ab, 0xa06a2517
  },
  {
    0xf1da05aa, 0x38c50d15, 0x718a1a2a, 0xe3143454, 0x1d596ee9,
    0x3ab2ddd2, 0x7565bba4, 0xeacb7748, 0x0ee7e8d1, 0x1dcfd1a2,
    0x3b9fa344, 0x773f4688, 0xee7e8d10, 0x078c1c61, 0x0f1838c2,
    0x1e307184, 0x3c60e308, 0x78c1c610, 0xf1838c20, 0x38761e01,
    0x70ec3c02, 0xe1d87804, 0x18c1f649, 0x3183ec92, 0x6307d924,
    0xc60fb248, 0x576e62d1, 0xaedcc5a2, 0x86c88d05, 0xd6e01c4b,
    0x76b13ed7, 0xed627dae
  },
  {
    0x8f352d95, 0xc51b5d6b, 0x5147bc97, 0xa28f792e, 0x9e6ff41d,
    0xe7aeee7b, 0x142cdab7, 0x2859b56e, 0x50b36adc, 0xa166d5b8,
    0x99bcad31, 0xe8085c23, 0x0b61be07, 0x16c37c0e, 0x2d86f81c,
    0x5b0df038, 0xb61be070, 0xb746c6a1, 0xb5fc8b03, 0xb0881047,
    0xba6126cf, 0xafb34bdf, 0x841791ff, 0xd35e25bf, 0x7dcd4d3f,
    0xfb9a9a7e, 0x2c4432bd, 0x5888657a, 0xb110caf4, 0xb95093a9,
    0xa9d02113, 0x88d14467
  },
  {
    0x33fff533, 0x67ffea66, 0xcfffd4cc, 0x448eafd9, 0x891d5fb2,
    0xc94bb925, 0x49e6740b, 0x93cce816, 0xfce8d66d, 0x22a0aa9b,
    0x45415536, 0x8a82aa6c, 0xce745299, 0x4799a373, 0x8f3346e6,
    0xc5178b8d, 0x515e115b, 0xa2bc22b6, 0x9e09432d, 0xe763801b,
    0x15b60677, 0x2b6c0cee, 0x56d819dc, 0xadb033b8, 0x80116131,
    0xdb53c423, 0x6dd68e07, 0xdbad1c0e, 0x6c2b3e5d, 0xd8567cba,
    0x6bddff35, 0xd7bbfe6a
  },
  {
    0xce3371cb, 0x4717e5d7, 0x8e2fcbae, 0xc72e911d, 0x552c247b,
    0xaa5848f6, 0x8fc197ad, 0xc4f2291b, 0x52955477, 0xa52aa8ee,
    0x9124579d, 0xf939a97b, 0x290254b7, 0x5204a96e, 0xa40952dc,
    0x9363a3f9, 0xfdb641b3, 0x201d8527, 0x403b0a4e, 0x8076149c,
    0xdb9d2f79, 0x6c4b58b3, 0xd896b166, 0x6a5c648d, 0xd4b8c91a,
    0x72009475, 0xe40128ea, 0x13735795, 0x26e6af2a, 0x4dcd5e54,
    0x9b9abca8, 0xec447f11
  },
  {
    0x1072db28, 0x20e5b650, 0x41cb6ca0, 0x8396d940, 0xdc5cb4c1,
    0x63c86fc3, 0xc790df86, 0x5450b94d, 0xa8a1729a, 0x8a33e375,
    0xcf16c0ab, 0x455c8717, 0x8ab90e2e, 0xce031a1d, 0x4777327b,
    0x8eee64f6, 0xc6adcfad, 0x562a991b, 0xac553236, 0x83db622d,
    0xdcc7c21b, 0x62fe8277, 0xc5fd04ee, 0x508b0f9d, 0xa1161f3a,
    0x995d3835, 0xe9cb762b, 0x08e7ea17, 0x11cfd42e, 0x239fa85c,
    0x473f50b8, 0x8e7ea170
  },
  {
    0xf891f16f, 0x2a52e49f, 0x54a5c93e, 0xa94b927c, 0x89e622b9,
    0xc8bd4333, 0x4a0b8027, 0x9417004e, 0xf35f06dd, 0x3dcf0bfb,
    0x7b9e17f6, 0xf73c2fec, 0x35095999, 0x6a12b332, 0xd4256664,
    0x733bca89, 0xe6779512, 0x179e2c65, 0x2f3c58ca, 0x5e78b194,
    0xbcf16328, 0xa293c011, 0x9e568663, 0xe7dc0a87, 0x14c9134f,
    0x2992269e, 0x53244d3c, 0xa6489a78, 0x97e032b1, 0xf4b16323,
    0x3213c007, 0x6427800e
  },
  {
    0x88b6ba63, 0xca1c7287, 0x4f49e34f, 0x9e93c69e, 0xe6568b7d,
    0x17dc10bb, 0x2fb82176, 0x5f7042ec, 0xbee085d8, 0xa6b00df1,
    0x96111da3, 0xf7533d07, 0x35d77c4f, 0x6baef89e, 0xd75df13c,
    0x75cae439, 0xeb95c872, 0x0c5a96a5, 0x18b52d4a, 0x316a5a94,
    0x62d4b528, 0xc5a96a50, 0x5023d2e1, 0xa047a5c2, 0x9bfe4dc5,
    0xec8d9dcb, 0x026a3dd7, 0x04d47bae, 0x09a8f75c, 0x1351eeb8,
    0x26a3dd70, 0x4d47bae0
  },
  {
    0x5ad8a92c, 0xb5b15258, 0xb013a2f1, 0xbb5643a3, 0xaddd8107,
    0x80ca044f, 0xdae50edf, 0x6ebb1bff, 0xdd7637fe, 0x619d69bd,
    0xc33ad37a, 0x5d04a0b5, 0xba09416a, 0xaf638495, 0x85b60f6b,
    0xd01d1897, 0x7b4b376f, 0xf6966ede, 0x365ddbfd, 0x6cbbb7fa,
    0xd9776ff4, 0x699fd9a9, 0xd33fb352, 0x7d0e60e5, 0xfa1cc1ca,
    0x2f4885d5, 0x5e910baa, 0xbd221754, 0xa13528e9, 0x991b5793,
    0xe947a967, 0x09fe548f
  },
  {
    0xb566f6e2, 0xb1bceb85, 0xb808d14b, 0xab60a4d7, 0x8db04fef,
    0xc011999f, 0x5b52357f, 0xb6a46afe, 0xb639d3bd, 0xb702a13b,
    0xb5744437, 0xb1998e2f, 0xb8421a1f, 0xabf5327f, 0x8c9b62bf,
    0xc247c33f, 0x5ffe803f, 0xbffd007e, 0xa48b06bd, 0x92670b3b,
    0xffbf1037, 0x240f262f, 0x481e4c5e, 0x903c98bc, 0xfb083739,
    0x2d616833, 0x5ac2d066, 0xb585a0cc, 0xb07a47d9, 0xbb8589f3,
    0xac7a15a7, 0x83852d0f
  },
  {
    0x9d9129bf, 0xe053553f, 0x1bd7ac3f, 0x37af587e, 0x6f5eb0fc,
    0xdebd61f8, 0x660bc5b1, 0xcc178b62, 0x435e1085, 0x86bc210a,
    0xd6094455, 0x77638eeb, 0xeec71dd6, 0x06ff3ded, 0x0dfe7bda,
    0x1bfcf7b4, 0x37f9ef68, 0x6ff3ded0, 0xdfe7bda0, 0x64be7d01,
    0xc97cfa02, 0x4988f245, 0x9311e48a, 0xfd52cf55, 0x21d498eb,
    0x43a931d6, 0x875263ac, 0xd5d5c119, 0x70da8473, 0xe1b508e6,
    0x181b178d, 0x30362f1a
  },
  {
    0x2ee43a2c, 0x5dc87458, 0xbb90e8b0, 0xac50d721, 0x83d0a803,
    0xdcd05647, 0x62d1aacf, 0xc5a3559e, 0x5037ad7d, 0xa06f5afa,
    0x9bafb3b5, 0xec2e612b, 0x032dc417, 0x065b882e, 0x0cb7105c,
    0x196e20b8, 0x32dc4170, 0x65b882e0, 0xcb7105c0, 0x4d930dc1,
    0x9b261b82, 0xed3d3145, 0x010b64cb, 0x0216c996, 0x042d932c,
    0x085b2658, 0x10b64cb0, 0x216c9960, 0x42d932c0, 0x85b26580,
    0xd015cd41, 0x7b5a9cc3
  },
  {
    0x1b4511ee, 0x368a23dc, 0x6d1447b8, 0xda288f70, 0x6f2018a1,
    0xde403142, 0x67f164c5, 0xcfe2c98a, 0x44b49555, 0x89692aaa,
    0xc9a35315, 0x4837a06b, 0x906f40d6, 0xfbaf87ed, 0x2c2e099b,
    0x585c1336, 0xb0b8266c, 0xba014a99, 0xaf739373, 0x859620a7,
    0xd05d470f, 0x7bcb885f, 0xf79710be, 0x345f273d, 0x68be4e7a,
    0xd17c9cf4, 0x79883fa9, 0xf3107f52, 0x3d51f8e5, 0x7aa3f1ca,
    0xf547e394, 0x31fec169
  },
  {
    0xbce15202, 0xa2b3a245, 0x9e1642cb, 0xe75d83d7, 0x15ca01ef,
    0x2b9403de, 0x572807bc, 0xae500f78, 0x87d118b1, 0xd4d33723,
    0x72d76807, 0xe5aed00e, 0x102ca65d, 0x20594cba, 0x40b29974,
    0x816532e8, 0xd9bb6391, 0x6807c163, 0xd00f82c6, 0x7b6e03cd,
    0xf6dc079a, 0x36c90975, 0x6d9212ea, 0xdb2425d4, 0x6d394de9,
    0xda729bd2, 0x6f9431e5, 0xdf2863ca, 0x6521c1d5, 0xca4383aa,
    0x4ff60115, 0x9fec022a
  },
  {
    0xff08e5ef, 0x2560cd9f, 0x4ac19b3e, 0x9583367c, 0xf0776ab9,
    0x3b9fd333, 0x773fa666, 0xee7f4ccc, 0x078f9fd9, 0x0f1f3fb2,
    0x1e3e7f64, 0x3c7cfec8, 0x78f9fd90, 0xf1f3fb20, 0x3896f001,
    0x712de002, 0xe25bc004, 0x1fc68649, 0x3f8d0c92, 0x7f1a1924,
    0xfe343248, 0x271962d1, 0x4e32c5a2, 0x9c658b44, 0xe3ba10c9,
    0x1c0527d3, 0x380a4fa6, 0x70149f4c, 0xe0293e98, 0x1b237b71,
    0x3646f6e2, 0x6c8dedc4
  },
  {
    0x6f76172e, 0xdeec2e5c, 0x66a95af9, 0xcd52b5f2, 0x41d46da5,
    0x83a8db4a, 0xdc20b0d5, 0x633067eb, 0xc660cfd6, 0x57b099ed,
    0xaf6133da, 0x85b361f5, 0xd017c5ab, 0x7b5e8d17, 0xf6bd1a2e,
    0x360b321d, 0x6c16643a, 0xd82cc874, 0x6b2896a9, 0xd6512d52,
    0x77d35ce5, 0xefa6b9ca, 0x043c75d5, 0x0878ebaa, 0x10f1d754,
    0x21e3aea8, 0x43c75d50, 0x878ebaa0, 0xd46c7301, 0x73a9e043,
    0xe753c086, 0x15d6874d
  },
  {
    0x56f5cab9, 0xadeb9572, 0x80a62ca5, 0xda3d5f0b, 0x6f0bb857,
    0xde1770ae, 0x675fe71d, 0xcebfce3a, 0x460e9a35, 0x8c1d346a,
    0xc34b6e95, 0x5de7db6b, 0xbbcfb6d6, 0xacee6bed, 0x82add19b,
    0xde2aa577, 0x67244caf, 0xce48995e, 0x47e034fd, 0x8fc069fa,
    0xc4f1d5b5, 0x5292ad2b, 0xa5255a56, 0x913bb2ed, 0xf906639b,
    0x297dc177, 0x52fb82ee, 0xa5f705dc, 0x909f0df9, 0xfa4f1db3,
    0x2fef3d27, 0x5fde7a4e
  },
  {
    0x385993ac, 0x70b32758, 0xe1664eb0, 0x19bd9b21, 0x337b3642,
    0x66f66c84, 0xcdecd908, 0x40a8b451, 0x815168a2, 0xd9d3d705,
    0x68d6a84b, 0xd1ad5096, 0x782ba76d, 0xf0574eda, 0x3bdf9bf5,
    0x77bf37ea, 0xef7e6fd4, 0x058dd9e9, 0x0b1bb3d2, 0x163767a4,
    0x2c6ecf48, 0x58dd9e90, 0xb1bb3d20, 0xb8077c01, 0xab7ffe43,
    0x8d8efac7, 0xc06cf3cf, 0x5ba8e1df, 0xb751c3be, 0xb5d2813d,
    0xb0d4043b, 0xbad90e37
  },
  {
    0xb4247b20, 0xb339f001, 0xbd02e643, 0xa174cac7, 0x999893cf,
    0xe84021df, 0x0bf145ff, 0x17e28bfe, 0x2fc517fc, 0x5f8a2ff8,
    0xbf145ff0, 0xa559b9a1, 0x91c27503, 0xf8f5ec47, 0x2a9adecf,
    0x5535bd9e, 0xaa6b7b3c, 0x8fa7f039, 0xc43ee633, 0x530cca27,
    0xa619944e, 0x97422edd, 0xf5f55bfb, 0x309bb1b7, 0x6137636e,
    0xc26ec6dc, 0x5fac8bf9, 0xbf5917f2, 0xa5c329a5, 0x90f7550b,
    0xfa9fac57, 0x2e4e5eef
  },
  {
    0x695186a7, 0xd2a30d4e, 0x7e371cdd, 0xfc6e39ba, 0x23ad7535,
    0x475aea6a, 0x8eb5d4d4, 0xc61aafe9, 0x57445993, 0xae88b326,
    0x8660600d, 0xd7b1c65b, 0x74128af7, 0xe82515ee, 0x0b3b2d9d,
    0x16765b3a, 0x2cecb674, 0x59d96ce8, 0xb3b2d9d0, 0xbc14b5e1,
    0xa3586d83, 0x9dc1dd47, 0xe0f2bccf, 0x1a947fdf, 0x3528ffbe,
    0x6a51ff7c, 0xd4a3fef8, 0x7236fbb1, 0xe46df762, 0x13aae885,
    0x2755d10a, 0x4eaba214
  },
  {
    0x66bc001e, 0xcd78003c, 0x41810639, 0x83020c72, 0xdd751ea5,
    0x619b3b0b, 0xc3367616, 0x5d1dea6d, 0xba3bd4da, 0xaf06aff5,
    0x857c59ab, 0xd189b517, 0x78626c6f, 0xf0c4d8de, 0x3af8b7fd,
    0x75f16ffa, 0xebe2dff4, 0x0cb4b9a9, 0x19697352, 0x32d2e6a4,
    0x65a5cd48, 0xcb4b9a90, 0x4de63361, 0x9bcc66c2, 0xece9cbc5,
    0x02a291cb, 0x05452396, 0x0a8a472c, 0x15148e58, 0x2a291cb0,
    0x54523960, 0xa8a472c0
  },
  {
    0xb58b27b3, 0xb0674927, 0xbbbf940f, 0xac0e2e5f, 0x836d5aff,
    0xddabb3bf, 0x6026613f, 0xc04cc27e, 0x5be882bd, 0xb7d1057a,
    0xb4d30cb5, 0xb2d71f2b, 0xbedf3817, 0xa6cf766f, 0x96efea9f,
    0xf6aed37f, 0x362ca0bf, 0x6c59417e, 0xd8b282fc, 0x6a1403b9,
    0xd4280772, 0x732108a5, 0xe642114a, 0x17f524d5, 0x2fea49aa,
    0x5fd49354, 0xbfa926a8, 0xa4234b11, 0x93379063, 0xfd1e2687,
    0x214d4b4f, 0x429a969e
  },
  {
    0xfe273162, 0x273f6485, 0x4e7ec90a, 0x9cfd9214, 0xe28a2269,
    0x1e654293, 0x3cca8526, 0x79950a4c, 0xf32a1498, 0x3d252f71,
    0x7a4a5ee2, 0xf494bdc4, 0x32587dc9, 0x64b0fb92, 0xc961f724,
    0x49b2e809, 0x9365d012, 0xfdbaa665, 0x20044a8b, 0x40089516,
    0x80112a2c, 0xdb535219, 0x6dd7a273, 0xdbaf44e6, 0x6c2f8f8d,
    0xd85f1f1a, 0x6bcf3875, 0xd79e70ea, 0x744de795, 0xe89bcf2a,
    0x0a469815, 0x148d302a
  },
  {
    0xd3c98813, 0x7ce21667, 0xf9c42cce, 0x28f95fdd, 0x51f2bfba,
    0xa3e57f74, 0x9cbbf8a9, 0xe206f713, 0x1f7ce867, 0x3ef9d0ce,
    0x7df3a19c, 0xfbe74338, 0x2cbf8031, 0x597f0062, 0xb2fe00c4,
    0xbe8d07c9, 0xa66b09d3, 0x97a715e7, 0xf43f2d8f, 0x330f5d5f,
    0x661ebabe, 0xcc3d757c, 0x430becb9, 0x8617d972, 0xd75eb4a5,
    0x75cc6f0b, 0xeb98de16, 0x0c40ba6d, 0x188174da, 0x3102e9b4,
    0x6205d368, 0xc40ba6d0
  },
  {
    0xf7d6deb4, 0x34dcbb29, 0x69b97652, 0xd372eca4, 0x7d94df09,
    0xfb29be12, 0x2d227a65, 0x5a44f4ca, 0xb489e994, 0xb262d569,
    0xbfb4ac93, 0xa4185f67, 0x9341b88f, 0xfdf2775f, 0x2095e8ff,
    0x412bd1fe, 0x8257a3fc, 0xdfde41b9, 0x64cd8533, 0xc99b0a66,
    0x4847128d, 0x908e251a, 0xfa6d4c75, 0x2fab9eab, 0x5f573d56,
    0xbeae7aac, 0xa62df319, 0x972ae073, 0xf524c6a7, 0x31388b0f,
    0x6271161e, 0xc4e22c3c
  },
  {
    0xedb88320, 0x00000001, 0x00000002, 0x00000004, 0x00000008,
    0x00000010, 0x00000020, 0x00000040, 0x00000080, 0x00000100,
    0x00000200, 0x00000400, 0x00000800, 0x00001000, 0x00002000,
    0x00004000, 0x00008000, 0x00010000, 0x00020000, 0x00040000,
    0x00080000, 0x00100000, 0x00200000, 0x00400000, 0x00800000,
    0x01000000, 0x02000000, 0x04000000, 0x08000000, 0x10000000,
    0x20000000, 0x40000000
  },
  {
    0x76dc4190, 0xedb88320, 0x00000001, 0x00000002, 0x00000004,
    0x00000008, 0x00000010, 0x00000020, 0x00000040, 0x00000080,
    0x00000100, 0x00000200, 0x00000400, 0x00000800, 0x00001000,
    0x00002000, 0x00004000, 0x00008000, 0x00010000, 0x00020000,
    0x00040000, 0x00080000, 0x00100000, 0x00200000, 0x00400000,
    0x00800000, 0x01000000, 0x02000000, 0x04000000, 0x08000000,
    0x10000000, 0x20000000
  },
  {
    0x1db71064, 0x3b6e20c8, 0x76dc4190, 0xedb88320, 0x00000001,
    0x00000002, 0x00000004, 0x00000008, 0x00000010, 0x00000020,
    0x00000040, 0x00000080, 0x00000100, 0x00000200, 0x00000400,
    0x00000800, 0x00001000, 0x00002000, 0x00004000, 0x00008000,
    0x00010000, 0x00020000, 0x00040000, 0x00080000, 0x00100000,
    0x00200000, 0x00400000, 0x00800000, 0x01000000, 0x02000000,
    0x04000000, 0x08000000
  }
};
#endif /* CRC32_H_ */