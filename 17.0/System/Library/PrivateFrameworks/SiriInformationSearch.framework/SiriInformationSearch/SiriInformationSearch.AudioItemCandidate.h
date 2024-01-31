@class NSString;

@interface SiriInformationSearch.AudioItemCandidate : NSObject {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ artist;
    void /* unknown type, empty encoding */ itemType;
    void /* unknown type, empty encoding */ source;
    void /* unknown type, empty encoding */ requiresSubscription;
    void /* unknown type, empty encoding */ isDownloaded;
    void /* unknown type, empty encoding */ score;
    void /* unknown type, empty encoding */ features;
    void /* unknown type, empty encoding */ backingItem;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end
