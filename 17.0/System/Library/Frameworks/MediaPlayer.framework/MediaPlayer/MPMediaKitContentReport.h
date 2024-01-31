@class NSString;

@interface MPMediaKitContentReport : NSObject <NSCopying>

@property (copy, nonatomic) NSString *displayText;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *concernItemID;
@property (nonatomic) long long concernItemType;
@property (copy, nonatomic) NSString *commentText;
@property (copy, nonatomic) NSString *concernTypeID;
@property (copy, nonatomic) NSString *parentContentID;
@property (copy, nonatomic) NSString *parentConcernType;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
