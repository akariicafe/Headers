@interface PSGTVOutManager : NSObject {
    int _connectedAdapterType;
}

- (id)init;
- (int)connectedAdapterType;
- (void)refreshConnectedAdapterType;

@end
