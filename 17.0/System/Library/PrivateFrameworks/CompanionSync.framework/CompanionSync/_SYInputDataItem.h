@class NSMutableData;

@interface _SYInputDataItem : NSObject

@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (nonatomic) unsigned long long length;
@property (readonly, nonatomic) unsigned long long lengthRemaining;
@property (readonly, nonatomic) NSMutableData *data;
@property (copy, nonatomic) id /* block */ callback;

- (void).cxx_destruct;
- (id)initWithLength:(unsigned long long)a0 callback:(id /* block */)a1;

@end
