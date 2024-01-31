@class NSString, MPMediaLibrary;

@interface MPMediaLibraryConnectionAssertion : NSObject {
    MPMediaLibrary *_library;
}

@property (readonly, nonatomic) NSString *identifier;

- (void)dealloc;
- (id)_initWithMediaLibrary:(id)a0 identifier:(id)a1;
- (id)description;
- (void).cxx_destruct;

@end
