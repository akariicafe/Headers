@class NSUUID, GDEntityIdentifier;

@interface GDVUEntityUpdate : GDVUUpdate {
    void /* unknown type, empty encoding */ inner;
}

@property (nonatomic, readonly) long long updateType;
@property (nonatomic, readonly) GDEntityIdentifier *entityIdentifier;
@property (nonatomic, readonly) NSUUID *tag;

- (id)init;
- (void).cxx_destruct;

@end
