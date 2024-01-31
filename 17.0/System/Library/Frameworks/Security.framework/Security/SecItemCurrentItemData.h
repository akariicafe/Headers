@class NSData, NSDate;

@interface SecItemCurrentItemData : NSObject

@property (retain) NSData *persistentRef;
@property (retain) NSDate *currentItemPointerModificationTime;

- (void).cxx_destruct;
- (id)initWithPersistentRef:(id)a0;

@end
