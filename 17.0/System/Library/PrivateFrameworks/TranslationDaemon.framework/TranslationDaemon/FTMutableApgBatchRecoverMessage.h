@class FTPronGuessResponse, FTStartBatchRecoverRequest, FTBatchRecoverFinalResponse, NSObject;
@protocol FLTBFBufferAccessor, NSCopying;

@interface FTMutableApgBatchRecoverMessage : FTApgBatchRecoverMessage

@property (nonatomic) long long session_message_type;
@property (copy, nonatomic) FTStartBatchRecoverRequest *session_messageAsFTStartBatchRecoverRequest;
@property (copy, nonatomic) FTPronGuessResponse *session_messageAsFTPronGuessResponse;
@property (copy, nonatomic) FTBatchRecoverFinalResponse *session_messageAsFTBatchRecoverFinalResponse;
@property (copy, nonatomic) NSObject<FLTBFBufferAccessor, NSCopying> *session_message;

+ (Class)session_message_mutableClassForType:(long long)a0;
+ (long long)session_message_typeForMutableObject:(id)a0;
+ (long long)session_message_typeForObject:(id)a0;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setSession_message:(id)a0;

@end
