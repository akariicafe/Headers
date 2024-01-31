@class NSString;

@interface PKShowPreview : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *storeId;
@property (copy, nonatomic) NSString *feedUrl;
@property (copy, nonatomic) NSString *uuid;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 storeId:(id)a1 feedUrl:(id)a2 uuid:(id)a3;

@end
