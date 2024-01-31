@class NSString, NSMapTable;

@interface GEOCustomEnvironmentInfo : GEOEnvironmentInfo {
    NSMapTable *_overrideURLs;
    NSString *_uuid;
}

- (void)delete;
- (void)save;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isActive;
- (void)updateWithURLs:(id)a0;
- (id)initWithName:(id)a0 displayName:(id)a1 dictionaryRepresentation:(id)a2;
- (void)makeActive;
- (id)overrideURLs;

@end
