# Programming

This company is definitely suspicious. Someone must have developed their website and we would like to see if this person has any connection with our case. This person must have an account for his IT projects. Can you find it?

Format : HEXA{url}

## Method

Nothing on the website even in the footer where we can usually find such information. However, there's a backup on the Wayback Machine:

![](./images/2023-01-29-11-15-38-image.png)

Developers usually use platforms such as Gitlab or Github to store code projects. Downloaded http://nelexat.ch/.git/ thanks to this great tool: https://github.com/arthaud/git-dumper

![](./images/2023-01-29-11-18-39-image.png)

- A username: OVokolska

- An email address: ovokolska@protonmail.com

The username leads us to a Github profile:

![](./images/2023-01-29-11-19-42-image.png)

Furthermore, there are two branches in this repository, the `feature-live-chat` branch is interesting:

![](./images/2023-01-29-11-21-34-image.png)

- MM: like Mastermind?

- Schedule a call: made me think of a Google Agenda meeting needed in another challenge.

## Solution

```
HEXA{https://github.com/OVokolska}
```
