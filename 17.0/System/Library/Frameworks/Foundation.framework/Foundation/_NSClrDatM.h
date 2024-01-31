@interface _NSClrDatM : NSConcreteMutableData

- (BOOL)_allowsDirectEncoding;
- (void)encodeWithCoder:(id)a0;
- (void)_freeBytes;
- (id)description;
- (BOOL)_canReplaceWithDispatchDataForXPCCoder;
- (BOOL)_canUseRealloc;

@end
