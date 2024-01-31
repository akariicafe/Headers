@class NSData;

@interface HMIdentifierSaltStore : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSData *identifierSalt;
@property (retain, nonatomic) NSData *assistantIdentifierSalt;

- (void).cxx_destruct;

@end
