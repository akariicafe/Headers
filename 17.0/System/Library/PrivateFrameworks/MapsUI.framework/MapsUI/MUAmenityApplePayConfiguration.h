@protocol MUAmenityItemViewModel;

@interface MUAmenityApplePayConfiguration : NSObject

@property (retain, nonatomic) id<MUAmenityItemViewModel> applePayRowAmenity;
@property (nonatomic) BOOL showApplePayIcons;

+ (id)configurationFromAmenityItem:(id)a0;

- (void).cxx_destruct;

@end
