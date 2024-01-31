@class NSString;

@interface CPLResetFeedbackMessage : CPLFeedbackMessage

@property (readonly, nonatomic) NSString *resetType;
@property (readonly, nonatomic) NSString *reason;
@property (readonly, nonatomic) NSString *uuid;

+ (id)feedbackType;

- (void).cxx_destruct;
- (id)initWithResetType:(id)a0 reason:(id)a1 uuid:(id)a2 libraryIdentifier:(id)a3;
- (id)serverMessage;

@end
