@class GDEntityIdentifier;

@interface GDVUObservationUpdate : GDVUUpdate {
    void /* unknown type, empty encoding */ inner;
}

@property (nonatomic, readonly) long long updateType;
@property (nonatomic, readonly) long long observationIdentifier;
@property (nonatomic, readonly) GDEntityIdentifier *entityIdentifier;

- (id)init;

@end
