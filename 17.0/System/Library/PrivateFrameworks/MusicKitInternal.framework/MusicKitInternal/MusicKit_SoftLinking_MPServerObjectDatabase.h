@class MPServerObjectDatabase;

@interface MusicKit_SoftLinking_MPServerObjectDatabase : NSObject {
    MPServerObjectDatabase *_underlyingServerObjectDatabase;
}

@property (class, readonly, nonatomic) MusicKit_SoftLinking_MPServerObjectDatabase *sharedServerObjectDatabase;

- (id)importObjectsFromRequest:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)_initWithUnderlyingServerObjectDatabase:(id)a0;
- (id)payloadDataForIdentifier:(id)a0 identifierKinds:(long long)a1 error:(id *)a2;

@end
