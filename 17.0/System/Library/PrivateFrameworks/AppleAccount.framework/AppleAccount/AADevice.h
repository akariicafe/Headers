@class NSString;

@interface AADevice : NSObject

@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *osVersion;
@property (readonly, nonatomic) NSString *swVersion;
@property (readonly, nonatomic) NSString *modelSmallPhotoURL3x;
@property (readonly, nonatomic) NSString *modelSmallPhotoURL2x;
@property (readonly, nonatomic) NSString *modelSmallPhotoURL1x;
@property (readonly, nonatomic) NSString *modelLargePhotoURL3x;
@property (readonly, nonatomic) NSString *modelLargePhotoURL2x;
@property (readonly, nonatomic) NSString *modelLargePhotoURL1x;
@property (readonly, nonatomic) NSString *modelDisplayName;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
