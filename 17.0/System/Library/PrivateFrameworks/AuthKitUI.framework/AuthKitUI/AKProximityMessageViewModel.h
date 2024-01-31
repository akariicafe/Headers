@class NSString;

@interface AKProximityMessageViewModel : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *detailedText;
@property (copy, nonatomic) NSString *primaryButtonTitle;
@property (copy, nonatomic) NSString *secondaryButtonTitle;

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;

@end
