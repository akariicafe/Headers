@class NSArray, NSString, MusicKit_SoftLinking_MPModelObject;

@interface MusicKit_SoftLinking_MPModelResponseDetailedKeepLocalStatusRequesting : NSObject <MPModelResponseDetailedKeepLocalStatusRequesting>

@property (retain, nonatomic) MusicKit_SoftLinking_MPModelObject *modelObject;
@property (copy, nonatomic) NSArray *children;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)newOperationForDetailedKeepLocalStatusConfigurationForSectionAtIndex:(long long)a0 responseHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithModelObject:(id)a0 children:(id)a1;

@end
