@protocol IKEntityValueProviding;

@interface _SUUIDynamicGridEntityValueProviderValue : NSObject

@property (retain, nonatomic) id<IKEntityValueProviding> entityValueProvider;
@property (nonatomic) long long sectionIndex;

- (void).cxx_destruct;

@end
