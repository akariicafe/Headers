@class NSString, NSError;

@interface SMMadridMessageResultWaitingForProcessing : NSObject

@property (copy, nonatomic) NSString *messageGUID;
@property (nonatomic) BOOL success;
@property (copy, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)initWithMessageGUID:(id)a0 success:(BOOL)a1 error:(id)a2;

@end
