@interface MTFullFeedRequest : MTBaseFeedRequest {
    void /* unknown type, empty encoding */ isSerial;
    void /* unknown type, empty encoding */ hasSeasons;
}

- (id)initWithStoreID:(long long)a0;
- (id)initWithStoreID:(long long)a0 isSerial:(BOOL)a1 hasSeasons:(BOOL)a2;

@end
