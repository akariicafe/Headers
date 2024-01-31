@class NSNumber;

@interface NMSAudiobookReferenceObject : NSObject

@property (readonly, nonatomic) NSNumber *audiobookIdentifier;
@property (nonatomic) unsigned long long downloadLimit;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)audiobookMediaItem;
- (id)initWithAudiobookIdentifier:(id)a0 downloadLimit:(unsigned long long)a1;

@end
