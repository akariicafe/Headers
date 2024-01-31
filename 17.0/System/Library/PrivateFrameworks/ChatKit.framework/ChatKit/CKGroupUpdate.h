@class NSString;

@interface CKGroupUpdate : NSObject

@property (nonatomic) long long groupUpdateType;
@property (retain, nonatomic) NSString *handleID;

- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 handleID:(id)a1;

@end
