@class NSString, ACActivityDescriptor;
@protocol _TtP18ActivityUIServices23ActivityUpdateProviding_;

@interface ACUISActivityUpdateProvider : NSObject <ACUISActivityUpdateProviding> {
    id<_TtP18ActivityUIServices23ActivityUpdateProviding_> _updateProviding;
}

@property (nonatomic) long long state;
@property (readonly, copy, nonatomic) NSString *activityIdentifier;
@property (readonly, copy, nonatomic) ACActivityDescriptor *descriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)_activityState:(long long)a0;
- (id)initWithActivityUpdateProviding:(id)a0;

@end
