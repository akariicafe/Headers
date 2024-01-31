@class NSObject, FTItnResponse, FTItnRequest;
@protocol FLTBFBufferAccessor, NSCopying;

@interface FTMutableAsrItnMessage : FTAsrItnMessage

@property (nonatomic) long long session_message_type;
@property (copy, nonatomic) FTItnRequest *session_messageAsFTItnRequest;
@property (copy, nonatomic) FTItnResponse *session_messageAsFTItnResponse;
@property (copy, nonatomic) NSObject<FLTBFBufferAccessor, NSCopying> *session_message;

+ (Class)session_message_mutableClassForType:(long long)a0;
+ (long long)session_message_typeForMutableObject:(id)a0;
+ (long long)session_message_typeForObject:(id)a0;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setSession_message:(id)a0;

@end
