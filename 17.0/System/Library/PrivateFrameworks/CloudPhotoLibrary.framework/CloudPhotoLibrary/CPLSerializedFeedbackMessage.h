@class NSUUID, NSString, CPLServerFeedbackMessage, NSDictionary;

@interface CPLSerializedFeedbackMessage : NSObject

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSString *feedbackType;
@property (readonly, nonatomic) CPLServerFeedbackMessage *serverMessage;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)messagesForPlistRepresentation:(id)a0;
+ (id)plistRepresentationForMessages:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;

@end
