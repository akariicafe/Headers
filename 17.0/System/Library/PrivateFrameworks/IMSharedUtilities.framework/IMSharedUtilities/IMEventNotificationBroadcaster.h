@interface IMEventNotificationBroadcaster : IMEventNotificationQueue

- (void)_didProcessQueue;
- (void)_willProcessQueue;
- (void)broadcastEventToListeners:(id /* block */)a0;

@end
