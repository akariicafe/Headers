@class NSMutableDictionary;

@interface MFIMAPConnectionFlagSearchResults : NSObject {
    NSMutableDictionary *_uidsWithFlagMaskSet;
    NSMutableDictionary *_uidsWithoutFlagMaskSet;
}

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)_flagsForUID:(unsigned long long)a0;
- (id)_indexSetFromUIDs:(id)a0;
- (void)cacheStateForUIDs:(id)a0 mask:(unsigned long long)a1 existenceSetsFlag:(BOOL)a2;
- (id)copyResponseForUID:(unsigned long long)a0;

@end
