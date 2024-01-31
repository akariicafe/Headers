@class NSUUID, NSDictionary;

@interface DDUIPairCompleteMessage : NSObject

@property (nonatomic) BOOL isCancellation;
@property (readonly, nonatomic) unsigned long long notificationResult;
@property (readonly, nonatomic) NSUUID *listenerUUID;
@property (readonly, nonatomic) NSDictionary *cancellationReason;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithCancellationReason:(id)a0;
- (id)initWithNotificationResult:(unsigned long long)a0;
- (id)initWithNotificationResult:(unsigned long long)a0 listenerUUID:(id)a1;

@end
