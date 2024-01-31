@class PKPass, NSArray, NSString;

@interface PKDashboardPassTilesItem : NSObject <PKDashboardItem>

@property (retain, nonatomic) PKPass *pass;
@property (copy, nonatomic) NSArray *tiles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void).cxx_destruct;

@end
