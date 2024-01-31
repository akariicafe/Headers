@class NSNumber;

@interface VUIMPShowMediaCollection : VUIMPMediaCollection {
    NSNumber *_seasonCount;
}

- (void).cxx_destruct;
- (id)initWithMediaLibrary:(id)a0 mediaItemCollection:(id)a1 identifier:(id)a2 requestedProperties:(id)a3 kind:(id)a4;
- (id)initWithMediaLibrary:(id)a0 mediaItemCollection:(id)a1 requestedProperties:(id)a2;
- (id)seasonCount;

@end
