@interface CRTrackedDocumentOutputRegion : CRDocumentOutputRegion {
    unsigned long long _trackedRegionType;
}

+ (id)documentWithTrackedRegionGroups:(id)a0;
+ (id)documentWithTrackedRegions:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0 copyChildren:(BOOL)a1 copyCandidates:(BOOL)a2 deepCopy:(BOOL)a3;

@end
