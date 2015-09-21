/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "MessageListDelegate.h"

@protocol ThreadedMessageListDelegate <MessageListDelegate>
- (void)threadedMessageList:(id)arg1 messageWillChange:(id)arg2;
- (void)threadedMessageList:(id)arg1 willRemoveThread:(id)arg2 withConversationID:(id)arg3;
- (void)threadedMessageList:(id)arg1 willAddThread:(id)arg2 withConversationID:(id)arg3;
- (void)threadedMessageList:(id)arg1 willRemoveMessage:(id)arg2;
- (void)threadedMessageList:(id)arg1 willAddMessage:(id)arg2 withConversationID:(id)arg3;
- (id)threadForMessage:(id)arg1;
- (id)conversationIDForMessage:(id)arg1;
- (id)threadForConversationID:(id)arg1;
@end
