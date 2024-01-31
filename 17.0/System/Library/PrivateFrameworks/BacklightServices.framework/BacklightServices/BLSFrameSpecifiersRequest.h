@class NSDate, NSDateInterval;

@interface BLSFrameSpecifiersRequest : NSObject {
    id /* block */ _completion;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_completed;
}

@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) NSDate *previousPresentationDate;
@property (readonly, nonatomic) BOOL shouldReset;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)completeWithDateSpecifiers:(id)a0;
- (id)initWithDateInterval:(id)a0 previousPresentationDate:(id)a1 shouldReset:(BOOL)a2 completion:(id /* block */)a3;

@end
