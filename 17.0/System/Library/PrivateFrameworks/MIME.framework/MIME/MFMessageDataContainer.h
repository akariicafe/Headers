@class NSData;

@interface MFMessageDataContainer : NSObject {
    NSData *_data;
    BOOL _partial;
    BOOL _incomplete;
}

- (id)initWithData:(id)a0;
- (id)data;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 partial:(BOOL)a1 incomplete:(BOOL)a2;

@end
