@interface TSUPermanentObject : NSObject

@property (readonly, nonatomic) BOOL isPermanent;

- (id)retain;
- (oneway void)release;
- (void)markAsPermanent;

@end
