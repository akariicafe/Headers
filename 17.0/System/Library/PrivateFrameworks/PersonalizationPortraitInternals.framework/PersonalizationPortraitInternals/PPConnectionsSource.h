@protocol PPConnectionsLocationSourceDelegate;

@interface PPConnectionsSource : NSObject

@property (weak, nonatomic) id<PPConnectionsLocationSourceDelegate> delegate;

+ (id)sharedInstance;
+ (id)identifier;

- (void).cxx_destruct;

@end
