@interface ICSharedWithYouControllerInternal : NSObject <SWHighlightCenterDelegate> {
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ highlightCenter;
    void /* unknown type, empty encoding */ viewContextObjectsDidChangeObserver;
    void /* unknown type, empty encoding */ viewContextDidSaveObserver;
    void /* unknown type, empty encoding */ objectIdsOfEditedNotes;
    void /* unknown type, empty encoding */ shareObservers;
    void /* unknown type, empty encoding */ accountsDidChangeObserver;
    void /* unknown type, empty encoding */ processHighlightsQueue;
}

@property (class, nonatomic, readonly) ICSharedWithYouControllerInternal *sharedController;

@property (nonatomic, retain) void /* unknown type, empty encoding */ managedObjectContext;

- (void)highlightCenterHighlightsDidChange:(id)a0;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)fetchShareMetadataWithURLs:(id)a0 completion:(id /* block */)a1;
- (id)highlightForURL:(id)a0;
- (void)userAcceptedInvitationWithShareMetadata:(id)a0 associatedObjectID:(id)a1;

@end
