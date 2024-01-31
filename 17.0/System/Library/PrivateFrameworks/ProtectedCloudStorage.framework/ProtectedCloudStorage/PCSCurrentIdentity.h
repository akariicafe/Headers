@class NSDate;

@interface PCSCurrentIdentity : NSObject

@property struct _PCSIdentityData { } *identity;
@property (retain) NSDate *currentItemPointerModificationTime;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithIdentity:(struct _PCSIdentityData { } *)a0 currentItemPointerModificationTime:(id)a1;

@end
