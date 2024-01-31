@class NSString, NSDate;

@interface CKSpotlightSearchResult : NSObject

@property (copy, nonatomic) NSString *chatGUID;
@property (copy, nonatomic) NSString *messageGUID;
@property (copy, nonatomic) NSString *summary;
@property (retain, nonatomic) NSDate *messageDate;

- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)initWithMessageGUID:(id)a0 chatGUID:(id)a1 messageTime:(id)a2 summery:(id)a3;

@end
