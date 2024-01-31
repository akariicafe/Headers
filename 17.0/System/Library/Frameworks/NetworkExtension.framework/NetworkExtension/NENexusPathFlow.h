@class NWPath;

@interface NENexusPathFlow : NENexusFlow {
    NWPath *_path;
}

- (id)parameters;
- (void).cxx_destruct;
- (id)endpoint;
- (id)clientIdentifier;

@end
