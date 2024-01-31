@interface PKPassHealthPassFaceView : PKPassFrontFaceView {
    unsigned long long _requestedRegions;
    unsigned long long _effectiveRegions;
}

- (id)templateForHeaderBucket;
- (id)templateForLayoutMode:(long long)a0;

@end
