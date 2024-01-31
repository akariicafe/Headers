@class MPSectionedCollection;

@interface MPCModelRadioPersonalizationRequest : MPModelRequest <NSCopying> {
    MPSectionedCollection *_radioStationTracks;
}

@property (nonatomic) BOOL analyticsSignpostsEnabled;

+ (BOOL)supportsSecureCoding;
+ (BOOL)requiresNetwork;

- (id)init;
- (id)newOperationWithResponseHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRadioStationTracks:(id)a0;

@end
