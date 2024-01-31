@interface _NSClrDat : NSConcreteData

- (BOOL)_allowsDirectEncoding;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)_canReplaceWithDispatchDataForXPCCoder;

@end
