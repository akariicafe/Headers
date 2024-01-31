@class NSMapTable, MPProtocolProxy;
@protocol MPCQueueControllerPublisher;

@interface _MPCQueueControllerRegistry : NSObject

@property (class, readonly, nonatomic) _MPCQueueControllerRegistry *shared;

@property (readonly, nonatomic) MPProtocolProxy<MPCQueueControllerPublisher> *publisherProxy;
@property (readonly, copy, nonatomic) NSMapTable *transportableExtensions;

- (id)init;
- (void).cxx_destruct;

@end
