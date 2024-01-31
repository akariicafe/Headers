@class NSString, NSPersistentHistoryToken;

@interface PLPersistentHistoryMarkerToken : PLPersistentHistoryMarker <PLPersistentHistoryMarkerOverrides> {
    NSPersistentHistoryToken *_token;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithToken:(id)a0;
- (id)overrride_changeRequestForFetching;
- (id)overrride_shortDescription;
- (void).cxx_destruct;

@end
