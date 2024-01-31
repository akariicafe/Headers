@class NSArray;

@interface GEOTileDBSubscriptionMetadata : NSObject {
    NSArray *_dataStates;
}

@property (readonly, nonatomic) long long downloadState;

- (void).cxx_destruct;
- (id)initWithDataStates:(id)a0 downloadState:(long long)a1;
- (BOOL)isFullyLoadedForDataType:(unsigned int)a0 dataSubtype:(unsigned int)a1 version:(unsigned long long)a2 associatedDataCount:(unsigned long long *)a3 associatedDataSize:(unsigned long long *)a4;

@end
