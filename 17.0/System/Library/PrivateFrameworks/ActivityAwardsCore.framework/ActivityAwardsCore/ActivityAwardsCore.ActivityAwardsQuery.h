@interface ActivityAwardsCore.ActivityAwardsQuery : ActivityAwardsCore.BaseQuery {
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ initialAwardsHandler;
    void /* unknown type, empty encoding */ addedAwardsHandler;
    void /* unknown type, empty encoding */ removedAwardsHandler;
    void /* unknown type, empty encoding */ updatedAwardsHandler;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
