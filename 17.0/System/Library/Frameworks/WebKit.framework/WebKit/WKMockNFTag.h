@class NSData, NSString;
@protocol NFTagA, NFTagF, NFTagB;

@interface WKMockNFTag : NSObject <NFTag> {
    unsigned int _type;
    struct RetainPtr<NSData> { void *m_ptr; } _tagID;
}

@property (readonly, nonatomic) unsigned int type;
@property (readonly, nonatomic) unsigned int technology;
@property (readonly, copy, nonatomic) NSData *tagID;
@property (readonly, copy, nonatomic) NSData *UID;
@property (readonly, nonatomic) unsigned int ndefAvailability;
@property (readonly, nonatomic) unsigned long long ndefMessageSize;
@property (readonly, nonatomic) unsigned long long ndefContainerSize;
@property (readonly, copy, nonatomic) NSData *AppData;
@property (readonly, nonatomic) id<NFTagA> tagA;
@property (readonly, nonatomic) id<NFTagB> tagB;
@property (readonly, nonatomic) id<NFTagF> tagF;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithType:(unsigned int)a0;
- (id)initWithNFTag:(id)a0;
- (BOOL)isEqualToNFTag:(id)a0;
- (id)initWithType:(unsigned int)a0 tagID:(id)a1;

@end
