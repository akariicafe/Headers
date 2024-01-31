@class OADSubBlip;

@interface OADBlip : NSObject {
    unsigned int mReferenceCount;
    OADSubBlip *mMainSubBlip;
    OADSubBlip *mAltSubBlip;
}

+ (id)pathExtensionForBlipType:(int)a0;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned int *)referenceCount;
- (void)setMainSubBlip:(id)a0;
- (id)altSubBlip;
- (id)mainSubBlip;
- (void)setAltSubBlip:(id)a0;

@end
